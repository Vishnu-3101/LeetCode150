#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                int left=j+1;
                int right=n-1;
                while(left<right){
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[left]+(long long)nums[right];
                    if(sum==(long long)target){
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
                        int i1=left,i2=right;
                        while(left<right && nums[left]==nums[i1]) left++;
                        while(left<right && nums[right]==nums[i2]) right--;
                    }
                    
                    else if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                   
                }
            }
        }
        return result;
    }
};