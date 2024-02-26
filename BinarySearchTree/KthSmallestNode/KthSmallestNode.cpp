#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int curInd = 1;
    int kthMin = -1;

    void inorder(TreeNode* root,int &k){
        if(root==NULL) return;
        inorder(root->left,k);
        if(curInd++==k){
            kthMin = root->val;
        }
        inorder(root->right,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return kthMin;
    }
};