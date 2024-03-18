#include<bits/stdc++.h>
using namespace std;

// Using Breadth First Search

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        Node* newNode = new Node(node->val);
        queue<Node*> q;
        q.push(node);
        unordered_map<int,Node*> visited;
        visited[newNode->val] = newNode;
        while(!q.empty()){
            Node* n = q.front();
            q.pop();
            for(auto i: n->neighbors){
                if(!visited[i->val]){
                    q.push(i);
                    Node* neighbor = new Node(i->val);
                    visited[i->val] = neighbor;
                    visited[n->val]->neighbors.push_back(neighbor);
                }
                else{
                    visited[n->val]->neighbors.push_back(visited[i->val]);
                }
            }
        }
        return newNode;
    }
};


// Using Depth First Search

class Solution {
public:
    Node* findClone(Node* node, unordered_map<int,Node*> &visited){
        if(visited[node->val]) return visited[node->val];
        Node* newNode = new Node(node->val);
        visited[node->val] = newNode;
        for(auto i:node->neighbors){
            Node* neighbor = findClone(i,visited);
            visited[node->val]->neighbors.push_back(neighbor);
        }
        return newNode;
    }
    
    
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        unordered_map<int,Node*> visited;
        return findClone(node, visited);
    }
};