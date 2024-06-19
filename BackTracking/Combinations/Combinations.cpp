#include<bits/stdc++.h>
using namespace std;

// Optimal approach

class Solution {
public:
    vector<vector<int>> result;
    void FindCombinations(int n,int k, int i, vector<int> combination){
        if(k==0){
            result.push_back(combination);
            return;
        }
        for(int j=i;j<n+1;j++){
            combination.push_back(j);
            FindCombinations(n,k-1,j+1,combination);
            combination.pop_back();
            
        }
    } 
    vector<vector<int>> combine(int n, int k) {
        vector<int> combination;
        FindCombinations(n,k,1,combination);
        return result;
    }
};

// Using take or not take 

class Solution {
public:
    vector<vector<int>> result;
    void FindCombinations(int n,int k, int i, vector<int> &combination){
        if(k==0){
            result.push_back(combination);
            return;
        }
        if(i>n) return; 
        combination.push_back(i);
        FindCombinations(n,k-1,i+1,combination);
        combination.pop_back();
        FindCombinations(n,k,i+1,combination);            
    } 
    vector<vector<int>> combine(int n, int k) {
        vector<int> combination;
        FindCombinations(n,k,1,combination);
        return result;
    }
};