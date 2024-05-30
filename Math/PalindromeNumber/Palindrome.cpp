#include<bits/stdc++.h>
using namespace std;

// Reversing only half of the number
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (x == reversed) || (x == reversed / 10);
    }
};

// Reversing complete number

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