#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxlen = 1;
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                maxlen = 2;
            }
        }

        for(int length=3;length<=n;length++){
            for(int i=0;i<n-length+1;i++){
                int j = i+length-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=1;
                    start = i;
                    maxlen = length;
                }
            }
        }
        return s.substr(start,maxlen);
    }
};