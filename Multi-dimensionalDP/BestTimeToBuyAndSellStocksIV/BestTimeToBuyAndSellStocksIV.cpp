#include<bits/stdc++.h>
using namespace std;

// Recursion

class Solution1 {
public:
    int f(int i, int buy, int count, vector<int> &prices, vector<vector<vector<int>>> &dp){
        if(i==prices.size()) return 0;
        if(count==0) return 0;
        if(dp[i][buy][count]!=-1) return dp[i][buy][count];
        if(buy){
            return dp[i][buy][count] = max(-prices[i]+f(i+1,0,count,prices,dp),f(i+1,1,count,prices,dp));
        }
        return dp[i][buy][count] = max(prices[i]+f(i+1,1,count-1,prices,dp),f(i+1,0,count,prices,dp));
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,k,prices,dp);
    }
};

// Space optimization

class Solution2 {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> curr(2,vector<int>(k+1,0));
        vector<vector<int>> next(2,vector<int>(k+1,0));
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                for(int count=1;count<=k;count++){
                    if(buy==1){
                        curr[buy][count] = max(-prices[i]+next[0][count],next[1][count]);
                    }
                    else{
                        curr[buy][count] = max(prices[i]+next[1][count-1],next[0][count]);
                    }
                }
            }
            next = curr;
        }
        return next[1][k];
    }
};