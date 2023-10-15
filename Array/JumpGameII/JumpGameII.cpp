#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int maxjump=0;
        int left=0,right=0;
        int jump=0;
        while(right<nums.size()-1){
            for(int i=left;i<=right;i++){
                maxjump = max(maxjump,i+nums[i]);
            }
            left=right+1;
            right=maxjump;
            jump++;
        }
        return jump;
    }
};