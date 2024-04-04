#include<bits/stdc++.h>
using namespace std;


// No extra space

class Solution1 {
public:
    vector<vector<int>> result;
    void FindPermutations(vector<int>&nums, int n){
        if(nums.size()==n){
            result.push_back(nums);
            return;
        }
        for(int i=n;i<nums.size();i++){
            swap(nums[i],nums[n]);
            FindPermutations(nums,n+1); 
            swap(nums[i],nums[n]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        FindPermutations(nums,0);
        return result;
    }
};

// Solution with extra space

class Solution2 {
public:
    vector<vector<int>> result;
    void FindPermutations(vector<int>&nums, vector<int> permut, unordered_map<int,bool> &visited){
        if(nums.size()==permut.size()){
            result.push_back(permut);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!visited[nums[i]]){
                visited[nums[i]]=true;
                permut.push_back(nums[i]);
                FindPermutations(nums,permut,visited);
                visited[nums[i]] = false;
                permut.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> permut;
        unordered_map<int,bool> visited;
        for(auto i:nums){
            visited[i] = false;
        }
        FindPermutations(nums,permut,visited);
        return result;
    }
};