#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            // Checking if the left subarray is sorted
            if(nums[mid]>=nums[low]){
                // Check if the target is in (low,mid)
                if(target>=nums[low] && target<nums[mid]){
                    high = mid-1;
                }
                // If target is not in (low,mid) then it is present in (mid+1,high) so we increase low  = mid+1
                else{
                    low = mid+1;
                }
            }
            // Else part means that right subarray is sorted.
            else{
                // If target is present in (mid,high)
                if(target>nums[mid] && target<=nums[high]){
                    low = mid+1;
                }
                // If target is not in (mid,high) then it is i (low,mid-1)
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};