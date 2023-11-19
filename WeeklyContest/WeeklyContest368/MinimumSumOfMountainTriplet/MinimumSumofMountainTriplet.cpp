#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int minsum =INT_MAX;
        vector<int> leftmin(n);
        leftmin[1] = nums[0];
        for(int i=2;i<n-1;i++){
            leftmin[i] = min(leftmin[i-1],nums[i-1]);
        }
        vector<int> rightmin(n);
        rightmin[n-2]= nums[n-1];
        for(int i=n-3;i>=1;i--){
            rightmin[i] = min(rightmin[i+1],nums[i+1]);
        }
        
        for(int i=1;i<n-1;i++){
            if(nums[i]>leftmin[i] && nums[i]>rightmin[i]){
                minsum = min(minsum,nums[i]+leftmin[i]+rightmin[i]);
            }
        }
        return minsum==INT_MAX? -1:minsum;
    }
};