#include<bits/stdc++.h>
using namespace std;

// We could also use a set instead of arrays to store the indexes values where queen cannot be placed

class Solution1 {
public:
    int result;
    bool col[9];
    bool posDia[18];
    bool negDia[18];
    
    void placeQueens(int r, int n){
        if(n==r){
            result++;
            return;
        }
        for(int i=0;i<n;i++){
            if(col[i] || posDia[i+r] || negDia[i-r+n]){
                continue;
            }
            col[i] = true;
            posDia[i+r] = true;
            negDia[i-r+n] = true;
            placeQueens(r+1,n);
            col[i] = false;
            posDia[i+r] = false;
            negDia[i-r+n] = false;
        }
    }
    int totalNQueens(int n) {
        placeQueens(0,n);
        return result;
    }
};