#include<bits/stdc++.h>
using namespace std;

// Brute force

class Solution {
public:
    int mySqrt(int x) {
        long long i=1;
        while(i*i<=x){
            i++;
        }
        return i-1;
    }
};

// Using binary search

class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        while(low<=high){
            long long mid = (low+high)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) high = mid-1;
            else low = mid+1;
        }
        return high;
    }
};