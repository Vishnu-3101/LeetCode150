#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        unordered_map<int,vector<int>> adj;
        vector<int> indegree(numCourses,0);
        for(auto i: prerequisites){
            indegree[i[0]]++;
            adj[i[1]].push_back(i[0]);
        }     
        
        queue<int> q;

        
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }


        vector<int> path;

        while(!q.empty()){
            int node = q.front();
            q.pop();      
            path.push_back(node);   
            for(auto i:adj[node]){           
                indegree[i]--;
                if(indegree[i]==0) q.push(i);               
            }            
        }
        if(path.size()==numCourses) return path;
        return {};
    }
};
