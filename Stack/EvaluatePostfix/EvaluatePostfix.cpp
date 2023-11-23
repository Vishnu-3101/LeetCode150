#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> store;
        for(auto i:tokens){
            if(i!="+" && i!="-" && i!="*" && i!="/"){
                store.push(stoi(i));
            }
            else{
                int num1 = store.top();
                store.pop();
                int num2 = store.top();
                store.pop();
                if(i=="+"){
                    store.push(num1+num2);
                }
                else if(i=="-"){
                    store.push(num2-num1);
                }
                else if(i=="*"){
                    store.push(num1*num2);
                }
                else if(i=="/"){
                    store.push(num2/num1);
                }
            }
        }
        return store.top();
    }
};