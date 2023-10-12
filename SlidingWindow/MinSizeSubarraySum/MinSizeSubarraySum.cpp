#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = INT_MAX;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            while(sum>=target){
                minlen = min(minlen,i-left+1);
                sum = sum-nums[left];
                left++;
            }
        }
        return (minlen == INT_MAX) ? 0: minlen;
    }
};