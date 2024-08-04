// -> count number of different possible strings from given number. 

#include <bits/stdc++.h>
using namespace std;

int f(int num,vector<int> &dp){
    if(num==0) return 1;
    if(dp[num]!=-1) return dp[num];
    int tens = num%100;
    int result = 0;
    if(num/10!=0 && tens>=1 && tens<=26){
        result+=f(num/100,dp);
    }
    result+=f(num/10,dp);
    return dp[num] = result;
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<f(n,dp)<<endl;
}