#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool col[9];
    bool posDia[18];
    bool negDia[18];
    vector<vector<string>> result;
    
    void placeQueens(int r, int n, vector<string> board){
        if(n==r){
            result.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(col[i] || posDia[i+r] || negDia[i-r+n]){
                continue;
            }
            col[i] = true;
            posDia[i+r] = true;
            negDia[i-r+n] = true;
            board[r][i]='Q';
            placeQueens(r+1,n,board);
            board[r][i]='.';
            col[i] = false;
            posDia[i+r] = false;
            negDia[i-r+n] = false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        placeQueens(0,n,board);
        return result;
    }
};