#include<bits/stdc++.h>
using namespace std;

// Dynamic Programming

class Solution1 {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n,0);
        result[0] = nums[0];
        int max_result = nums[0];
        for(int i=1;i<n;i++){
            result[i] = max(nums[i], nums[i]+result[i-1]);
            max_result = max(result[i], max_result);
        }
        return max_result;
    }
};

// Kadane's algorithm

class Solution2 {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int max_result = nums[0];
        for(int i=0;i<n;i++){
            sum+= nums[i];
            max_result = max(sum, max_result);
            if(sum<=0) sum=0;
        }
        return max_result;
    }
};