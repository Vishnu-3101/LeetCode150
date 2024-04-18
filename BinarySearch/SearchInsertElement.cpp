#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binarySearch(vector<int> &nums, int start, int end, int &target){
        if(start>=end) return start;
        int mid = (start+end)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>target) return binarySearch(nums,0,mid,target);
        return binarySearch(nums,mid+1,end,target);
    }
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        return binarySearch(nums,0,n,target);
    }
};