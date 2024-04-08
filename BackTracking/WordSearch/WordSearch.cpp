#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isWordFound(vector<vector<char>> &board, string word,int i, int j, vector<vector<bool>> &visited,int id){
        if(id==word.size()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || word[id]!=board[i][j] || visited[i][j]) return false;
        visited[i][j] = true;
        bool d1 = isWordFound(board,word,i+1,j,visited,id+1) || isWordFound(board,word,i-1,j,visited,id+1) || isWordFound(board,word,i,j+1,visited,id+1) || isWordFound(board,word,i,j-1,visited,id+1);
        visited[i][j] = false;
        return d1;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                string str = "";
                if(isWordFound(board,word,i,j,visited,0)) return true;
            }
        }
        return false;
    }
};