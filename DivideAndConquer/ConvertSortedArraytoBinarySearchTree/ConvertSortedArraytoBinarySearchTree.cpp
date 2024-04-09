#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* BuildTree(vector<int>&nums, int left, int right){
        if(left>right) return NULL;
        int mid = (left+right)/2;
        cout<<mid<<endl;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = BuildTree(nums,left,mid-1);
        root->right = BuildTree(nums,mid+1,right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BuildTree(nums,0,nums.size()-1);
    }
};