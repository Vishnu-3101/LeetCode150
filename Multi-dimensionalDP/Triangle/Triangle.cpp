#include<bits/stdc++.h>
using namespace std;

// Recursive memorization

class Solution {
public:
    int solveMem(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>&dp){
        if(i==triangle.size()-1){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left=solveMem(triangle,i+1,j,dp);
        int right=solveMem(triangle,i+1,j+1,dp);
        return dp[i][j]=min(left,right)+triangle[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),-1));
        return solveMem(triangle,0,0,dp);
    }
};

// Tabulation

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++){
            dp[n-1][i] = triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                dp[i][j] = triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};