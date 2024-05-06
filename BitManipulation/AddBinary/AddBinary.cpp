#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string result = "";
        while(i>=0 || j>=0 || carry){
            if(i>=0) carry+=a[i--]-'0';
            if(j>=0) carry+=b[j--]-'0';
            result+=to_string(carry%2);
            carry = carry>1?1:0;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};