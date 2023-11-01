#include<bits/stdc++.h>
using namespace std;

struct trie{
    trie* Node[26];
    bool flag=false;

    bool isPresent(char c){
        return (Node[c-'a']!=NULL);
    }

    void putNode(char c, trie* node){
        Node[c-'a']=node;
    }

    trie* getChar(char c){
        return Node[c-'a'];
    }

    void setFlag(){
        flag=true;
    }
};

class Trie {
    trie* root;
public:
    Trie() {
        root = new trie();
    }
    void insert(string word) {
        trie* Node=root;
        for(int i=0;i<word.length();i++){
            if(!Node->isPresent(word[i])){
                Node->putNode(word[i],new trie());
            }
            Node = Node->getChar(word[i]);
        }
        Node->setFlag();
    }
    
    bool search(string word) {
        trie* Node=root;
        for(int i=0;i<word.length();i++){
            if(!Node->isPresent(word[i])){
                return false;
            }
            Node = Node->getChar(word[i]);
        }
        return Node->flag;
    }
    
    bool startsWith(string prefix) {
        trie* Node=root;
        for(int i=0;i<prefix.length();i++){
            if(!Node->isPresent(prefix[i])){
                return false;
            }
            Node = Node->getChar(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */