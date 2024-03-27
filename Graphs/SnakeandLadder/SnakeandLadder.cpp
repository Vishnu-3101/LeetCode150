#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIndex(int node, int n){
        int r = n-1- (node-1)/n;
        int c = (node-1)%n;
        if(r%2==n%2) return {r,n-1-c};
        return {r,c};
    }

    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();      
        queue<int> q;
        vector<vector<int>> visited(n, vector<int> (n,0));
        q.push(1);
        visited[n-1][0] = 0;
        int minSteps = 0;
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                int node = q.front();
                q.pop();
                if(node == n*n) return minSteps;
                for(int k=1;k<=6;k++){
                    if(node+k>n*n) break;
                    vector<int> index = findIndex(node+k,n);
                    int row = index[0];
                    int col = index[1];
                    if(visited[row][col]) continue;
                    visited[row][col]=true;
                    if(board[row][col]==-1){
                        q.push(node+k);
                    }
                    else{
                        q.push(board[row][col]);
                    }
                }
            }
            minSteps++;
        }
        return -1;
    }
};