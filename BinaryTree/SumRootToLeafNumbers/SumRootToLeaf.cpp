#include<bits/stdc++.h>
using namespace std;

// Recursive solution

class Solution1 {
public:
    int help(TreeNode* node, int sum) {
        if (node == NULL){
            return 0;
        }      
        sum = sum * 10 + node->val;      
        if (node->left == NULL && node->right == NULL) {
            return sum; 
        }       
        int leftSum = help(node->left, sum);
        int rightSum = help(node->right, sum);
        
        return leftSum + rightSum;
    }    
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int ans=help(root,sum);
        return ans;
    }
};

// Level order traversal

class Solution2 {
public:
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        queue<long long> s;
        q.push(root);
        s.push(root->val);
        long long result=0;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            long long CurSum = s.front();
            s.pop();
            if(node->right==NULL && node->left==NULL){
                result+=CurSum;
                continue;
            }
            if(node->right!=NULL){
                s.push((CurSum*10) + node->right->val);
                q.push(node->right);
            }
            if(node->left!=NULL){
                s.push((CurSum*10) + node->left->val);
                q.push(node->left);
            } 
        }
        
        return result;
    }
};