#include<bits/stdc++.h>
using namespace std;

// O(NlogN) - TC

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1; i < nums.size() ; i=i+3){
            if(nums[i-1] != nums[i]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};

// using bitwise

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int sum=0;
            for(auto num:nums){
                sum+=(num>>i)&1;
            }
            sum%=3;
            ans = ans|(sum<<i);
        }
        return ans;
    }
};

// Using buckets
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twos=0;
        for(auto i:nums){
            ones = (ones^i)&(~twos);
            twos = (twos^i)&(~ones);
        }
        return ones;
    }
};

