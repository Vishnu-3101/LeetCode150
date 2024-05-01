#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int low=0,high=n-1;
        while(low<=high){
            int mid = (low+high)/2; 
            ans = min(ans,nums[mid]);
            if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};