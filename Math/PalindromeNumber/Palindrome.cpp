#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long result = 0;
        int y=x;
        while(x){
            int dig = x%10;
            result = result*10 + dig;
            x = x/10;
        }
        return y==result;
    }
};