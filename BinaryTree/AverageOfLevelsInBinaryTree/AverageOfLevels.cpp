#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avg;
        if(root==NULL) return avg;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            double s=0;
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                s+=node->val;
                if(node->right) q.push(node->right);
                if(node->left) q.push(node->left);
            }
            avg.push_back(s/n);
        }
        return avg;
    }
};