#include<bits/stdc++.h>
using namespace std;

// Using BFS

class Solution1 {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0) return true;
        unordered_map<int,vector<int>> adj;
        vector<int> indegree(numCourses,0);
        for(auto i: prerequisites){
            indegree[i[1]]++;
            adj[i[0]].push_back(i[1]);
        }     
        queue<int> q;

        
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }

        if(q.empty()) return false;

        stack<int> path;

        while(!q.empty()){
            int node = q.front();
            q.pop();      
            path.push(node);   
            for(auto i:adj[node]){           
                indegree[i]--;
                if(indegree[i]==0) q.push(i);               
            }            
        }
        if(path.size()==numCourses) return true;
        return false;
    }
};

// Using DFS

class Solution2 {
public:
    bool dfs(int node, unordered_map<int,vector<int>> &adj, vector<bool> &visited,vector<bool> &path){
        if(visited[node]) return true;
        visited[node]=true;
        path[node]=true;
        for(auto i:adj[node]){
            if(path[i]) return false;
            if(!visited[i]){
                if(!dfs(i,adj,visited,path)) return false;
            }
        }
        path[node]=false;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0) return true;
        unordered_map<int,vector<int>> adj;
        for(auto i: prerequisites){
            adj[i[0]].push_back(i[1]);
        }     
        vector<bool> visited(numCourses,0);
        vector<bool> path(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(!dfs(i,adj,visited,path)) return false;       
        }     
        return true;
    }
};