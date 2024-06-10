#include<bits/stdc++.h>
using namespace std;

// Top down approach

class Solution {
public:
    int solve(vector<vector<char>>&mat,int i,int j,int &maxi,vector<vector<int>>&dp){
        if(i>=mat.size()||j>=mat[0].size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=solve(mat,i,j+1,maxi,dp);
        int dia=solve(mat,i+1,j+1,maxi,dp);
        int left=solve(mat,i+1,j,maxi,dp);
        if(mat[i][j]=='1'){
            dp[i][j]=1+min(right,min(dia,left));
            maxi=max(maxi,dp[i][j]);
            return dp[i][j];
        }else{
            return 0;
        }
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi=0;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        solve(matrix,0,0,maxi,dp);
        return maxi*maxi;
    }
};

// Bottom up approach

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi=0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int right=dp[i][j+1];
                int dia=dp[i+1][j+1];
                int left=dp[i+1][j];
                if(matrix[i][j]=='1'){
                    dp[i][j]=1+min(right,min(dia,left));
                    maxi=max(maxi,dp[i][j]);
                }
            }
        }
        return maxi*maxi;
    }
};