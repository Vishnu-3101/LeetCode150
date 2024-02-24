#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int n=q.size();
            vector<int> level(n);
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                if(!flag) level[n-i-1] = node->val; 
                else level[i] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            flag = !flag;
            result.push_back(level);
        }
        return result;
    }
};