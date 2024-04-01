#include<bits/stdc++.h>
using namespace std;

class Trie{
public:
    Trie* nodes[26];
    bool isEnd = false;
    string word = "";
    
    void add(char c, Trie* node){
        nodes[c-'a'] = node;
    }

    Trie* next(char c){
        return nodes[c-'a'];
    }

    bool isPresent(char c){
        return nodes[c-'a']!=NULL;
    }
};

class Solution: public Trie {
public:
    void dfs(Trie* node, int i, int j, vector<vector<bool>> &visited, vector<vector<char>> &board, vector<string> &result){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || !node->isPresent(board[i][j]) || visited[i][j]) return ;
        visited[i][j]=true;
        node = node->next(board[i][j]);
        if(node->isEnd) {
            result.push_back(node->word);
            node->isEnd = false;
        }
        dfs(node, i+1,j,visited,board,result);
        dfs(node, i-1,j,visited,board, result);
        dfs(node, i,j+1,visited,board, result);
        dfs(node, i,j-1,visited,board, result);
        visited[i][j] = false;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* head = new Trie();
        for(auto word:words){
            Trie* node = head;
            for(auto i:word){
                if(!node->isPresent(i)){
                    node->add(i,new Trie());
                }
                node = node->next(i);
            }
            node->word = word;
            node->isEnd = true;
        }

        int m = board.size();
        int n = board[0].size();
        vector<string> result;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                vector<vector<bool>> visited(m,vector<bool>(n,false));
                Trie* node = head;
                if(node->isPresent(board[i][j])){
                    dfs(node,i,j,visited,board,result);
                }
            }
        }   
        return result;
    }
};