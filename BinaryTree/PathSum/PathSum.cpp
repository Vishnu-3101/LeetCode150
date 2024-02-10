#include<bits/stdc++.h>
using namespace std;

// Recursive Solution

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        if(root->right==NULL && root->left==NULL){
            return targetSum==root->val;
        }
        return hasPathSum(root->right, targetSum-root->val) || hasPathSum(root->left, targetSum-root->val);
    }
};

// Level order traversal

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        queue<TreeNode*> q;
        queue<int> s;
        q.push(root);
        s.push(root->val);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            int Sum = s.front();
            s.pop();
            if(node->right==NULL && node->left==NULL && Sum==targetSum) return true;
            if(node->right!=NULL){
                q.push(node->right);
                s.push(Sum+node->right->val);
            }
            if(node->left!=NULL){
                q.push(node->left);
                s.push(Sum+node->left->val);
            }
        }
        return false;
    }
};