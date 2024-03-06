#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> BreadthFirstSearch(int v, vector<int> adj[]){
        int n = adj.size();
        int visited[n] = {0};
        vector<int> result;
        queue<int> q;
        q.push(V);
        while(!q.empty()){
            int node = q.front();
            node.pop();
            result.push_back(node);
            for(auto i : adj[node]){
                if(!visited[i]){
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
        return result;
    }
}