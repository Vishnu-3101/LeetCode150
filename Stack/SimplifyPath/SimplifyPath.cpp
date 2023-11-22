#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string s) {
        int n = s.size();
        int i=0;
        stack<string> stack;
        while(i<n){
            while(i<n && s[i]=='/') i++;
            int right=i;
            while(right<n && s[right]!='/') right++;
            string substr = s.substr(i,right-i);
            if(substr==".."){
                if(!stack.empty()){
                    stack.pop();
                }
            }
            else if(substr!="" && substr!="."){
                cout<<substr<<endl;
                stack.push(substr);
            }
            i = right+1;
        }
        string ans="";
        while(!stack.empty()){
            ans=stack.top()+ans;
            ans='/'+ans;
            stack.pop();
        }
        if(ans=="") ans="/";

        return ans;
    }
};