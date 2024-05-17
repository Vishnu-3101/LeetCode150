#include<bits/stdc++.h>
using namespace std;

// Changing denominator

class Solution {
public:
    int trailingZeroes(int n) {
        int result=0;
        for(int i=5;n/i>=1;i=i*5){
            result+=(n/i);
        }
        return result;
    }
};

// Changing numerator

class Solution {
public:
    int trailingZeroes(int n) {
        int result=0;
        while(n>0){
            n = n/5;
            result+=n;
        }
        return result;
    }
};