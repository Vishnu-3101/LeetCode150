#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<char>> board, int i, int j, vector<vector<int>> &visited){
        if(i<0 || i>board.size()-1 || j<0 || j>board[0].size()-1 || board[i][j]=='X' || visited[i][j]) return;
        
        visited[i][j]=1;
        dfs(board,i+1,j,visited);
        dfs(board,i-1,j,visited);
        dfs(board,i,j+1,visited);
        dfs(board,i,j-1,visited);
        
        
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(board[i][0]=='O' && !visited[i][0]){
                dfs(board,i,0,visited);
            }
            if(board[i][m-1]=='O' && !visited[i][m-1]){
                dfs(board,i,m-1,visited);
            }
        }
        for(int j=0;j<m;j++){
            if(board[0][j]=='O' && !visited[0][j]){
                dfs(board,0,j,visited);
            }
            if(board[n-1][j]=='O' && !visited[n-1][j]){
                dfs(board,n-1,j,visited);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !visited[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};