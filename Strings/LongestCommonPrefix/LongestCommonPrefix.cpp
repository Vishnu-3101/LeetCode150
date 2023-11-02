#include<bits/stdc++.h>
using namespace std;

// This problem can be done in 3 ways.
// 1. Comparing first string with all the other strings to get the common prefix
// 2. Using trie data structure
// 3. Sorting the array of strings and comparing the char in 1st and last string to get the prefix

// We can do this using trie data structure
struct Node{
    Node* node[26];
    int nodeCount=0;
    bool end = false;
    bool isPresent(char c){
        return (node[c-'a']!=NULL);
    }
    void putNode(char c,Node* newnode){
        node[c-'a']=newnode;
    }
    Node* setNode(char c){
        return node[c-'a'];
    }

    void setEnd(){
        end=true;
    }

    void increCount(){
        nodeCount++;
    }
};

class Trie{
    public:
    Node* root;
    Trie(){
        root = new Node();
    }   
    void insert(string word){
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(!node->isPresent(word[i])){
                node->putNode(word[i],new Node());
                node->increCount();
            }
            node = node->setNode(word[i]);
        }
        node->setEnd();
    }
    int check(string s){
        Node* node = root;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(node->nodeCount>1){
                return count;
            }
            if(node->nodeCount==1 && node->end==true){
                return count;
            }
            node = node->setNode(s[i]);
            count++;
        }
        return count;
    }
};

class Solution1:public Trie{
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1){
            return strs[0];
        }
        for(int i=0;i<n;i++){
            insert(strs[i]);
        }
        int index = check(strs[n-1]);
        return strs[n-1].substr(0,index);
    }
};

// This is better than brute force approch with time complexity O(N2)
class Solution2{
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i=1;i<strs.size();i++){
            string currentstr = strs[i];
            int j=0;
            while(j<prefix.length() && j<currentstr.length() && prefix[j]==currentstr[j]){
                j++;
            }
            prefix = prefix.substr(0,j);
            if(prefix.empty()){
                return "";
            }
        }
        return prefix;
    }
};