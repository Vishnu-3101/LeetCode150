#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        int m = wordDict.size();
        vector<bool> dp(n+1,false);
        dp[n]=true;
        for(int i=n-1;i>=0;i--){
            for(auto word:wordDict){
                int l = word.size();
                if(i+l<=n+1 && word==s.substr(i,l)){
                    dp[i] = dp[i+l];
                }
                if(dp[i]) break;
            }
        }
        return dp[0];
    }
};