#include<bits/stdc++.h>
using namespace std;


class Solution1 {
public:
    bool validate(TreeNode* root, TreeNode* min, TreeNode* max){
        if(!root) return true;
        if((max && root->val>=max->val) || (min && root->val<=min->val)) return false;
        return validate(root->left, min, root) && validate(root->right, root, max);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root,NULL,NULL);
    }
};

class Solution {
public:
    bool validate(TreeNode* root, long minVal, long maxVal){
        if(!root) return true;
        if(root->val>=maxVal || root->val<=minVal) return false;
        return validate(root->left, minVal, root->val) && validate(root->right, root->val, maxVal);
    }
    bool isValidBST(TreeNode* root) {
        return validate(root,LONG_MIN,LONG_MAX);
    }
};