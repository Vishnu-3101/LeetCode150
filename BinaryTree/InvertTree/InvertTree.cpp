#include<bits/stdc++.h>
using namespace std;

// Level order traversal

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node==NULL) continue;
            swap(node->right,node->left);
            q.push(node->right);
            q.push(node->left);
        }
        return root;
    }
};

// Recursion

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        invertTree(root->right);
        invertTree(root->left);
        return root;
    }
};