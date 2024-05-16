#include<bits/stdc++.h>
using namespace std;

// Using setbit and getbit operations

class Solution {
public:
    int getNum(int left,int i){
        long r = left % (1<<(i+1));
        long diff = (1<<(i+1)) - r;
        return diff;
    }
    int getbit(int val,int i){
        return (val>>i)&1;
    }
    int setbit1(int val,int i){
        return (1<<i)|val;
    }
    int rangeBitwiseAnd(int left, int right) {
        int result = 0;
        for(int i=0;i<=31;i++){
            if(getbit(left,i)==0) continue;
            int next = getNum(left , i);
            if(right-left<next){
                result = setbit1(result,i);
            }
        }
        return result;
    }
};

// Most effiecint algo

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        // left = 101
        // right = 111
        while (left != right) {
            left >>= 1;
            right >>= 1;
            ++shift;
        }
        // left and right will be shifted by 2 and they would be 1.
        // our answer would be 1>>2 = 100 = 4. Only at i=2th bit will be 1 and all other as 0.
        return left << shift;
    }
};
