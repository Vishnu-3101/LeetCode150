#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr) return nullptr;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            Node* prev = NULL;

            for (int i = 0; i < n; i++) {
                Node* current = q.front();
                q.pop();

                if (prev != NULL) {
                    prev->next = current;
                }

                if (current->left != NULL) {
                    q.push(current->left);
                }
                if (current->right != NULL) {
                    q.push(current->right);
                }

                prev = current;
            }

            // Set the next pointer of the last node in the current level to null
            prev->next = NULL;
        }

        return root;
    }
};


// Other form of code using extra space

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root==NULL) return NULL;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<Node*> v;

            for(int i=0;i<n;i++){
                Node* node1 =  q.front();
                q.pop();
                if(node1->left!=NULL) q.push(node1->left);
                if(node1->right!=NULL) q.push(node1->right);
                v.push_back(node1);
            }
            int i=0;
            while(i<v.size()-1){
                v[i]->next = v[i+1];
                i++;
            }
            v[i]->next = NULL;
            
        }
        return root;
    }
};