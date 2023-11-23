#include<bits/stdc++.h>
using namespace std;

// Efficient solution O(1) tc and O(N) sc
class MinStack1 {
public:
    stack<long long> stack1;
    long long minNum;
    
    MinStack() {
        minNum = LLONG_MAX;
    }
    
    void push(long long val) {
        if(stack1.empty()){
            minNum = val;
            stack1.push(val);
        }
        else{
            if(minNum<=val){
                stack1.push(val);
            }
            else{
                stack1.push(2*val-minNum);
                minNum = val;
            }
        }
        
    }
    
    void pop() {
        if(stack1.empty()) return;
        if(stack1.top()<minNum) minNum = 2*minNum - stack1.top();
        stack1.pop();
    }
    
    int top() {
        if(stack1.empty()) return -1;
        if(stack1.top()<minNum) return minNum;
        return stack1.top();
    }
    
    int getMin() {
        return minNum;
    }
};


class MinStack2 {
public:
    stack<int> stack1;
    stack<int> minstack;
    
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        int minimum;
        if(!minstack.empty()) minimum = min(minstack.top(),val);
        else minimum = val;
        minstack.push(minimum);
    }
    
    void pop() {
        stack1.pop();
        minstack.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */