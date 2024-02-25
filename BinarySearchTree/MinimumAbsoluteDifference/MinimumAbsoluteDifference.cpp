#include<bits/stdc++.h>
using namespace std;

// Not using extra space

class Solution {
public:
    int minDiff = INT_MAX;
    int pre=-1;
    void Inorder(TreeNode* root){
        if(root==NULL) return;
        Inorder(root->left);
        if(pre>=0) minDiff = min(minDiff, root->val-pre);
        pre = root->val;
        Inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        Inorder(root);     
        return minDiff;
    }
};

// Using extra space

class Solution {
public:
    vector<int> nodes;
    void Inorder(TreeNode* root){
        if(root==NULL) return;
        Inorder(root->left);
        nodes.push_back(root->val);
        Inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        Inorder(root);
        int n=nodes.size();
        int minDiff=INT_MAX;
        for(int i=0;i<n-1;i++){
            minDiff = min(minDiff, nodes[i+1]-nodes[i]);
        }
        return minDiff;
    }
};