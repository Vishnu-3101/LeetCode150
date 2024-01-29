#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMirror(TreeNode* right, TreeNode* left){
        if(right==NULL || left==NULL) return right==left;
        if(right->val != left->val) return false;
        return isMirror(right->left, left->right)&&isMirror(right->right, left->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isMirror(root->right,root->left);   
    }
};