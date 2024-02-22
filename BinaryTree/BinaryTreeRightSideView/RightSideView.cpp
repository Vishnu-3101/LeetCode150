#include<bits/stdc++.h>
using namespace std;

// recursive approach - preorder traversal

class Solution {
public:
    vector<int> rightNodes;
    void findRightNodes(TreeNode* root,int level){
        if(root==NULL) return;
        if(rightNodes.size()==level) rightNodes.push_back(root->val);
        findRightNodes(root->right,level+1);
        findRightNodes(root->left,level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        findRightNodes(root,0);
        return rightNodes;
    }
};

// level order traversal

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> nodes;
        if(root==NULL) return nodes;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            nodes.push_back(q.back()->val);
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return nodes;
    }
};