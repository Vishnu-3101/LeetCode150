#include<bits/stdc++.h>
using namespace std;

// Time complexity O(N), space complexity O(1)
class Solution {
public:
    TreeNode* prev = NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        while(root!=NULL){
            TreeNode* pre = root->right;
            TreeNode* leftNode = root->left;
            if(leftNode!=NULL){
                while(leftNode->right!=NULL){
                    leftNode = leftNode->right;
                }
                leftNode->right = root->right;
                root->right = root->left;
                root->left = NULL;
            }
            root = root->right;        
        }
    }
};

// Time complexity O(N), space complexity O(N) -> recursion

class Solution {
public:
    TreeNode* prev = NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
};
