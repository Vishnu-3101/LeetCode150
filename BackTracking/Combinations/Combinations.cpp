#include<bits/stdc++.h>
using namespace std;

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