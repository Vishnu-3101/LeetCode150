#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.length();
        int n=needle.length();
        if(h<n){
            return -1;
        }
        for(int i=0;i<h;i++){
            if(needle[0]==haystack[i]){
                if(needle==haystack.substr(i,n)){
                    return i;
                }
            }
        }
        return -1;
    }
};