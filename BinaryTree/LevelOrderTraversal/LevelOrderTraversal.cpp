#include<bits/stdc++.h>
using namespace std;

//Recursive solution

class Solution1 {
public:
    vector<vector<int>> result;
    void traversal(TreeNode* root, int level){
        if(root==NULL) return;
        if(level<result.size()) result[level].push_back(root->val);
        else result.push_back({root->val});
        traversal(root->left,level+1);
        traversal(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {     
        traversal(root,0);
        return result;
    }
};

//iterative solution

class Solution2 {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> level;
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            result.push_back(level);
        }
        return result;
    }
};
