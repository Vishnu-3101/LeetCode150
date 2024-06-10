#include<bits/stdc++.h>
using namespace std;

// Brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};

// Using hashmap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            if(map.find(target-nums[i])!=map.end()) return {map[target-nums[i]],i};
            map[nums[i]] = i;
        }
        return {-1,-1};
    }
};