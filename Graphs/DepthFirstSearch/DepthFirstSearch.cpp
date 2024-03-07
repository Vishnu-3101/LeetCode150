#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    void dfs(int node, vector<int> ^adj[], int ^visited[], vector<int> &result){
        result.push_back(node);
        visited[node] = 1;
        for(auto i: adj[node]){
            if(!visited[i]){
                dfs(i);
            }
        }
    }

    vector<int> DepthFirstSearch(int node, vector<int> adj[]){
        int n = adj.size();
        int visited[n] = {0};
        vector<int> result;
        dfs(node,adj,visited,result);
        return result;
    }
}