#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int n=s.length();
        if(n%2!=0) return false;
        for(int i=0;i<n;i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{') stack.push(s[i]);
            else{
                if(stack.empty()) return false;
                char c = stack.top();
                stack.pop();
                if(c=='(' && s[i]==')' || c=='{' && s[i]=='}' || c=='[' && s[i]==']') continue;
                else{
                    return false;
                }
            }
        }
        if(stack.empty()){
            return true;
        }
        return false;
    }
};