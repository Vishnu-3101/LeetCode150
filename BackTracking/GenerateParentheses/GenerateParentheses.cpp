#include<bits/stdc++.h>
using namespace std;

// I have written two solutions for this. Have a look at them

class Solution1 {
public:
    vector<string> result;
    void FindParenthesis(string parenthesis,int open, int close){
        if(close==0){
            result.push_back(parenthesis);
            return;
        }
        
        if(open){
            FindParenthesis(parenthesis+'(',open-1,close);
        }
        if(close!=open){
            FindParenthesis(parenthesis+')',open,close-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        string parenthesis="";
        FindParenthesis(parenthesis,n,n);
        return result;
    }
};


class Solution2 {
public:
    vector<string> result;
    void FindParenthesis(string parenthesis, int n,int open, int close){
        if(parenthesis.size()==2*n){
            result.push_back(parenthesis);
            return;
        }
        if(open<n){
            FindParenthesis(parenthesis+'(',n,open+1,close);
        }
        if(close<open){
            FindParenthesis(parenthesis+')',n,open,close+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        string parenthesis = "";
        FindParenthesis(parenthesis,n,0,0);
        return result;
    }
};