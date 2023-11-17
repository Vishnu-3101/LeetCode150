#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n=nums.size();
        int i=0;
        while(i<n){
            int j=i;
            while(j+1<n && nums[j+1]==nums[j]+1){
                j++;
            }
            if(i!=j){
                string s = to_string(nums[i])+"->"+to_string(nums[j]);
                result.push_back(s);
            }
            else{
                result.push_back(to_string(nums[i]));
            }
            i=j+1;
        }
        return result;
    }
};