// -> Using DP array approach directly. Since I know what happens in tabulation.
// -> Perform space optimization to get to a better solution


#include <bits/stdc++.h>
using namespace std;

#define st unordered_set<int> 

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<st>> dp(n, vector<st>(n));
    st s;
    s.insert(arr[0][0]);
    dp[0][0] = s;
    for(int i=1;i<n;i++){
        st s;
        for(auto it:dp[i-1][0]){
            int sum=it+arr[i][0];
            s.insert(sum);
        }
        dp[i][0] = s;
    }
    
    for(int i=1;i<n;i++){
        st s;
        for(auto it:dp[0][i-1]){
            int sum=it+arr[0][i];
            s.insert(sum);
        }
        dp[0][i] = s;
    }
    
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            st result;
            for(auto it:dp[i-1][j]){
                result.insert(it+arr[i][j]);
            }
            for(auto it:dp[i][j-1]){
                result.insert(it+arr[i][j]);
            }
            dp[i][j] = result;
        }
    }
    int sum = 0;
    int ways = 0;
    for(auto i:dp[n-1][n-1]){
        cout<<i<<endl;
        sum+=i;
        ways++;
    }
    cout<<sum<<","<<ways<<endl;
    return 0;
}
