#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int right=i+1;
            int left=nums.size()-1;
            while(right<left){
                int sum = nums[i]+nums[right]+nums[left];
                if(sum==0){
                    result.push_back({nums[i],nums[right],nums[left]});
                    while(right<left && nums[right]==nums[right+1]) right++;
                    while(right<left && nums[left]==nums[left-1]) left--;
                    left--;
                    right++;
                }
                
                else if(sum<0){
                    right++;
                }
                else left--;
            }
        }
        return result;
    }
};