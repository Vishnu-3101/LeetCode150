#include<bits/stdc++.h>
using namespace std;

class NodePath{
    public:
        vector<int> path;
        bool hasPathtoNode(TreeNode* root, TreeNode* node){
            if(root=NULL) return false;
            path.push_back(root);
            if(root==node) return true;
            bool left = hasPathNode(root->left, node);
            bool right = hasPathNode(root->right, node);
            if(left || right) return true;
            path.pop_back(root);
            return false;
        }
}