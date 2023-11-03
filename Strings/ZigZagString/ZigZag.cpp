#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        string result="";
        int n=s.length();
        if(numRows==1){
            return s;
        }
        for(int i=0;i<numRows;i++){
            int j=i;
            int increment = (numRows-1)*2;
            for(int j=i;j<n;j=j+increment){
                result+=s[j];
                int middleIndex = increment+j-2*i;
                if(i>0 && i<numRows-1 && middleIndex<n){
                    result+=s[middleIndex];
                }
            }
        }
        return result;
    }
};