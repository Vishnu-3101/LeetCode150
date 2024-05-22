#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[1],nums[0]);
        int prev_two = nums[0];
        int prev_one = max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            result = max(nums[i]+prev_two , prev_one);
            prev_two = prev_one;
            prev_one = result;
        }
        cout<<result<<endl;
        return result;
    }
};