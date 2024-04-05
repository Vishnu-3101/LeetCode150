#include<bits/stdc++.h>
using namespace std;

// Using two recursive calls and not using for loops

class Solution1 {
public:
    vector<vector<int>> result;
    void getCombinations(vector<int>&candidates , int target, int i , vector<int> combination){
        if(i>=candidates.size()) return;
        if(target<=0){
            if(target==0) result.push_back(combination);
            return;
        }
        combination.push_back(candidates[i]);
        getCombinations(candidates,target-candidates[i],i,combination);
        combination.pop_back();
        getCombinations(candidates,target,i+1,combination);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        getCombinations(candidates, target,0,combination);
        return result;   
    }
};

// Using for loop

class Solution2 {
public:
    vector<vector<int>> result;
    void getCombinations(vector<int>&candidates , int target, int index , vector<int> combination){
        if(target<=0){
            if(target==0) result.push_back(combination);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            combination.push_back(candidates[i]);
            getCombinations(candidates,target-candidates[i],i,combination);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        getCombinations(candidates, target,0,combination);
        return result;   
    }
};