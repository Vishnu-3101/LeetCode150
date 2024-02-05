#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> map;
        for(int i=0;i<inorder.size();i++){
            map[inorder[i]]=i;
        }
        return buildTree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,map);
    }

    TreeNode* buildTree(vector<int> &postorder,int postEnd,vector<int> &inorder,int start,int end,unordered_map<int,int> &map){
        if(start>end || postStart>postEnd) return NULL;
        TreeNode* root = new TreeNode(postorder[postEnd]);
        int FindRoot = map[root->val];
        int leftRoot = FindRoot - start-1;
        root->left = buildTree(postorder,leftRoot, inorder, start, FindRoot-1,map);
        root->right = buildTree(postorder,postStart+leftsize,postEnd-1, inorder, FindRoot+1, end,map);
        return root;
    }
};