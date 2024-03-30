#include<bits/stdc++.h>
using namespace std;

class Trie{
public:
    Trie* nodes[26] = {NULL};
    bool isEnd=false;
    bool isPresent(char c){
        return nodes[c-'a']!=NULL;
    }
    void add(char c, Trie* newNode){
        nodes[c-'a'] = newNode;
    }
    Trie* nextNode(char c){
        return nodes[c-'a'];
    }
};

class WordDictionary:protected Trie {
public:
    Trie* head;
    WordDictionary() {
        head = new Trie();
    }
    
    void addWord(string word) {
        Trie* node = head;
        for(auto i:word){
            if(!node->isPresent(i)){
                node->add(i,new Trie());
            }
            node = node->nextNode(i);
        }
        node->isEnd = true;
    }
    
    bool search(string word){
        return dfs(word,0,head);
    }

    bool dfs(string word,int index, Trie* head) {
        Trie* node = head;
        for(int i=index;i<word.size();i++){
            if(word[i]=='.'){
                for(int j=0;j<26;j++){
                    if(node->nodes[j]!=NULL){
                        if(dfs(word,i+1,node->nodes[j])) return true;
                    }
                }
                return false;
            }

            if(!node->isPresent(word[i])) {
                return false;
            }
            node = node->nextNode(word[i]);
        }
        return node->isEnd;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */