#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool sudoku(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char k='1';k<='9';k++){
                        if(isValidSudoku(board,i,j,k)){
                            board[i][j]=k;
                            // cout<<board[i][j]<<endl;
                            if(sudoku(board)==true){
                                return true;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                        
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board);
    }
    bool isValidSudoku(vector<vector<char>> board,int row,int column, char val){
        for(int i=0;i<9;i++){
            if(board[row][i]==val){
                return false;
            }
            if(board[i][column]==val){
                return false;
            }
            if(board[(row/3)*3+i/3][(column/3)*3+i%3]==val){
                return false;
            }
        }
        return true;
    }
};