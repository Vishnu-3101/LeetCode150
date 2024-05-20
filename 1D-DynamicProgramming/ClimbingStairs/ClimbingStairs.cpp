#include<bits/stdc++.h>
using namespace std;

// Using recursion to come to a conclusing on what approach to use

class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }
        int l = climbStairs(n-1);
        int r = climbStairs(n-2);
        return l+r;
    }
};

// Using Extra space in DP

class Solution {
public:
    int climbStairs(int n) {
        int ans = 0;
        if(n==0 || n==1) return 1;
        int one = 1;
        int two = 1;
        for(int i=2;i<=n;i++){
            ans = one+two;
            one = two;
            two = ans;

        }
        return ans;
    }
};

// Using TC = O(N) and SC = O(1)

class Solution {
public:
    int climbStairs(int n) {
        vector<int> arr(n+1,0);
        if(n==0 || n==1) return 1;
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2;i<=n;i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};