#include<bits/stdc++.h>
using namespace std;

// Recursive solution 

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL) return p==q;
        bool left = isSameTree(p->left,q->left);
        bool right = isSameTree(p->right,q->right);
        return p->val==q->val && left && right;
    }
};

// Level order traversal

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> q1;
        q1.push(p);
        q1.push(q);
        while(!q1.empty()){
            TreeNode* node1 = q1.front();
            q1.pop();
            TreeNode* node2 = q1.front();
            q1.pop();
            if(node1==NULL && node2==NULL) continue;
            if(node1==NULL || node2==NULL || node1->val!=node2->val) return false;
            
            q1.push(node1->left);
            q1.push(node2->left);
            q1.push(node1->right);
            q1.push(node2->right);
        }
        return true;
    }
};
