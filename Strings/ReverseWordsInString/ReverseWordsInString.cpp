#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string reverse="";
        int n=s.length();
        int i=0;
        while(i<n){
            while(i<n && s[i]==' '){i++;}
            if(i>=n){
                break;
            }
            int j=i+1;
            while(j<n && s[j]!=' '){j++;}
            string sub = s.substr(i,j-i);
            if(reverse.length()==0){reverse = sub;}
            else{reverse = sub+" "+reverse;}
            i=j+1;
        }
        return reverse;
    }
};