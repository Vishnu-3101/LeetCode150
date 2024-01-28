#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Recursive approach

class Solution1 {
public:
    int maxDepth(TreeNode* root) {       
        if(root==NULL){
            return 0;
        }
        int r = maxDepth(root->right);
        int l = maxDepth(root->left);
        return max(l,r)+1;
    }
};


// Level order traversal

class Solution2 {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return 0;
        }
        int depth=0;
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->right!=NULL) q.push(node->right);  
                if(node->left!=NULL) q.push(node->left);  
            }
            depth++;
        }
        
        return depth;
    }
};