#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        long long nn = abs(n);
        while(nn){
            if(nn%2==0){
                x = x*x;
                nn = nn/2;
            }
            else{
                result*= x;
                nn--;
            }
        }
        if(n<0) result = 1/result;
        return result;
    }
};