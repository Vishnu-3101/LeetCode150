#include<bits/stdc++.h>
using namespace std;

class Solution {
public:  
    int findMax(TreeNode* root,int &maxSum){
        if(root==NULL) return 0;
        int left = max(0,findMax(root->left,maxSum));
        int right = max(0,findMax(root->right,maxSum));
        maxSum = max(maxSum, root->val+left+right);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        findMax(root,maxSum);
        return maxSum;
    }
};