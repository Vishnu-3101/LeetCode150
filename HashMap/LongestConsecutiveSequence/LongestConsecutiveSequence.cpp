#include<bits/stdc++.h>
using namespace std;

// Optimal solution tc -> O(n), sc-> O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set1(nums.begin(),nums.end());
        int maxSub=0;
        for(int i=0;i<nums.size();i++){
            if(set1.find(nums[i]-1)==set1.end()){
                int preSub=1;
                int next = nums[i]+1;
                while(set1.find(next)!=set1.end()){
                    preSub++;
                    next++;
                }
                maxSub = max(maxSub,preSub);
            }
        }
        return maxSub;
    }
};

// uses sorting. tc-> O(n*logn) , sc -> O(1)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maxSeq = 1;
        int preSeq = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0){
                continue;
            }
            if(nums[i]-nums[i-1]==1){
                preSeq++;
                maxSeq = max(maxSeq,preSeq);
            }
            else{
                preSeq=1;
            }
        }
        return maxSeq;
    }
};