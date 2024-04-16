#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxVal = nums[0];
        int n = nums.size();
        int curSum = 0;
        int curMin = 0;
        int curMax = 0;
        int minVal = nums[0];
        for(int i=0;i<n;i++){
            curSum+=nums[i];
            curMax = max(curMax+nums[i],nums[i]);
            curMin = min(curMin+nums[i],nums[i]);
            maxVal = max(maxVal,curMax);
            minVal = min(minVal,curMin);
        }
        if(maxVal<0) return maxVal;
        maxVal = max(maxVal, curSum - minVal);
        return maxVal;
    }
};