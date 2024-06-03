#include<bits/stdc++.h>
using namespace std;

// Memorization

class Solution {
public:
    bool interleaving(string &s1,string &s2,string &s3,int i, int j, vector<vector<int>>&dp){
        int k = i+j;
        if(i==s1.length() && j==s2.length() && k==s3.length()) return true;
        if(i==s1.length()){
            if(s2.substr(j,s2.length()-j)==s3.substr(k,s3.length()-k)) return true;
            return false;
        }
        else if(j==s2.length()){
            if(s1.substr(i,s1.length()-i)==s3.substr(k,s3.length()-k)) return true;
            return false;
        }
        else if(k==s3.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j]==1?true:false;
        bool ans = false;
        if(s1[i]==s3[k]) ans|=interleaving(s1,s2,s3,i+1,j,dp);
        if(s2[j]==s3[k]) ans|=interleaving(s1,s2,s3,i,j+1,dp);
        return dp[i][j] = ans?1:0;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n1= s1.size();
        int n2= s2.size();
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        return interleaving(s1,s2,s3,0,0,dp);
    }
};

// Tabulation

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1= s1.size();
        int n2= s2.size();
        if(n1+n2!=s3.size()) return false;
        vector<vector<bool>> dp(n1+1,vector<bool>(n2+1,false));
        dp[n1][n2] = true;
        for(int i=n1;i>=0;i--){
            for(int j=n2;j>=0;j--){
                if(i<n1 && s1[i]==s3[i+j] && dp[i+1][j]) dp[i][j]=true;
                if(j<n2 && s2[j]==s3[i+j] && dp[i][j+1]) dp[i][j]=true;
            }
        }
        return dp[0][0];
    }
};