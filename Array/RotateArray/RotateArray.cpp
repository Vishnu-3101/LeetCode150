#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());  
    }
};

class Solution {
public:
    void reverse(vector<int>&nums,int left,int right){
        while(left<right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        k = k%n;
        reverse(nums,left,right);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};