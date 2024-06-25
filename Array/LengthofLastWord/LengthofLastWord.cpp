#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int size = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' && size>0) return size;
            if(s[i]!=' '){
                size++;
            }
        }
        return size;
    }
};