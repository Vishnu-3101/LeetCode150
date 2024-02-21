#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue<pair<TreeNode*,int>> q;
        q.push(make_pair(root,0));
        long maxWidth = 0;
        while(!q.empty()){
            int s = q.size();
            long left = q.front().second;
            long right = q.back().second;
            for(int i=0;i<s;i++){
                pair<TreeNode*,int> node = q.front();
                q.pop();
                if(node.first->left!=NULL){
                    q.push(make_pair(node.first->left,2*(node.second-left)+1));
                }
                if(node.first->right!=NULL){
                    q.push(make_pair(node.first->right,2*(node.second-left)+2));
                }
            }
            long width = right-left+1;
            maxWidth = max(maxWidth,width);
        }
        return maxWidth;
    }
};