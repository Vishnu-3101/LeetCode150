#include<bits/stdc++.h>
using namespace std;

// Bottom-up approach

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        if(obstacleGrid[0][0]!=1) dp[0][0] = 1;
        for(int i=1;i<m;i++){
            if(obstacleGrid[i][0]!=1) dp[i][0] = dp[i-1][0];
        }
        for(int i=1;i<n;i++){
            if(obstacleGrid[0][i]!=1)  dp[0][i] = dp[0][i-1];
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]!=1){
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
    }
};

// Top-down approach

class Solution2 {
public:
    int findPath(vector<vector<int>>& obstacleGrid,int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i==m || j==n || obstacleGrid[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m-1 && j==n-1) return 1;
        dp[i][j] = findPath(obstacleGrid,i+1,j,m,n,dp)+findPath(obstacleGrid,i,j+1,m,n,dp);
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return findPath(obstacleGrid,0,0,m,n,dp);
    }
};