#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSum(int n){
        int sum=0;
        while(n!=0){
            int d = n%10;
            sum+=(d*d);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> pro;
        int sum = findSum(n);
        while(sum!=1){
            if(pro.find(sum)!=pro.end()){
                // cout<<sum<<endl;
                return false;
            }
            pro.insert(sum);
            sum = findSum(sum);
        }
        return true;
    }
};