#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(map1.find(nums[i])!=map1.end()){
                if(abs(map1[nums[i]]-i)<=k){
                    return true;
                }
                else{
                    map1[nums[i]]=i;
                }
            }
            else{
                map1[nums[i]]=i;
            }
        }
        return false;
    }
};