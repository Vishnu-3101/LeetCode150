#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// old -> new | store
//  0  ->  0  |   0
//  1  ->  0  |   1
//  0  ->  1  |   2
//  1  ->  1  |   3

    int countNeighbors(vector<vector<int>>& board, int r,int c,int rows,int columns){
        int nei = 0;
        for(int i=r-1;i<r+2;i++){
            for(int j=c-1;j<c+2;j++){
                if(i<0 || j<0 || i==rows || j==columns || (i==r && j==c)) continue;
                if(board[i][j]==1 || board[i][j]==3) nei++;
            }
        }
        return nei;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int columns = board[0].size();

        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                int nei = countNeighbors(board,i,j,rows,columns);
                if(board[i][j]==1){
                    if(nei==2 || nei==3){
                        board[i][j]=3;
                    }
                }
                else{
                    if(nei==3){
                        board[i][j]=2;
                    }
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(board[i][j]==1){
                    board[i][j]=0;
                }
                else if(board[i][j]==2 || board[i][j]==3){
                    board[i][j]=1;
                }
            }
        }
    }
};