#include<bits/stdc++.h>
using namespace std;

// Going by question

class Solution1 {
public:
    int lowerBound(vector<int> &nums, int target){
        int low = 0, high = nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
            }
            if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
    int upperBound(vector<int> &nums, int target){
        int low = 0, high = nums.size()-1;
        int ans=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
            }
            if(nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int low = lowerBound(nums,target);
        int high = upperBound(nums,target);
        return {low,high};
    }
};

// Using upper and lower bound defination

class Solution2 {
public:
    int lowerBound(vector<int> &nums, int target){
        int low = 0, high = nums.size()-1;
        int ans=0;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    int upperBound(vector<int> &nums, int target){
        int low = 0, high = nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                ans=mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int low = lowerBound(nums,target);
        cout<<low<<endl;
        if(low==nums.size() || nums[low]!=target) return {-1,-1};
        int high = upperBound(nums,target);
        return {low,high-1};
    }
};