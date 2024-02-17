#include<bits/stdc++.h>
using namespace std;

class BSTIterator {
public:
    stack<TreeNode*> s;
    void Insert(TreeNode* root){
        while(root!=NULL){
            s.push(root);
            root=root->left;
        }
    }

    BSTIterator(TreeNode* root) {
        Insert(root);
    }
    
    int next() {
        TreeNode* node = s.top();
        s.pop();
        if(node->right!=NULL){
            Insert(node->right);
        }
        return node->val;
    }
    
    bool hasNext() {
        if(!s.empty()) return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */