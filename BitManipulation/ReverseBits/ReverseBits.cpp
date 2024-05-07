#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r=0;
        for(int i=0;i<31;i++){
            r |= (n & 1);
            n = n>>1;
            r = r<<1;
        }
        r |= n&1;
        return r;
    }
};