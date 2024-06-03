#include<bits/stdc++.h>
using namespace std;

// Memorization

class Solution {
public:
    int f(int i,int j,string &word1,string &word2,vector<vector<int>> &dp){
        if(i==word1.size()) return word2.size()-j;
        if(j==word2.size()) return word1.size()-i;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]) return dp[i][j]=f(i+1,j+1,word1,word2,dp);
        return dp[i][j]=min(min(1+f(i+1,j,word1,word2,dp),1+f(i,j+1,word1,word2,dp)),1+f(i+1,j+1,word1,word2,dp));
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(0,0,word1,word2,dp);
    }
};

// Tabulation approach

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<=n;i++){
            dp[0][i] = i;
        }
        for(int i=0;i<=m;i++){
            dp[i][0] = i;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(word1[i-1]==word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else{
                    dp[i][j] = min({1+dp[i-1][j],1+dp[i][j-1],1+dp[i-1][j-1]});
                }
            }
        }
        return dp[m][n];
    }
};

// Space optimized

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<int> dp(n+1);
        for(int i=0;i<=n;i++){
            dp[i] = i;
        }
        for(int i=1;i<m+1;i++){
            vector<int> temp(n+1,-1);
            temp[0] = i;
            for(int j=1;j<n+1;j++){
                if(word1[i-1]==word2[j-1]) temp[j] = dp[j-1];
                else{
                    temp[j] = min({1+dp[j],1+temp[j-1],1+dp[j-1]});
                }
            }
            dp = temp;
        }
        return dp[n];
    }
};