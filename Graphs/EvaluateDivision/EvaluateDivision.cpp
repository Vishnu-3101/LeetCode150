#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    double bfs(string num, string den, unordered_map<string,vector<pair<double,string>>> &adj){
        queue<string> q;
        queue<double> r;
        if(adj.find(num)==adj.end()) return double(-1.0);
        if(adj.find(den)==adj.end()) return double(-1.0);
        r.push(double(1.0));
        q.push(num);
        unordered_set<string> visited;
        visited.insert(num);
        bool result_found=0;
        while(!q.empty() && !result_found){
            string s = q.front();
            double mul = r.front();
            r.pop();
            q.pop();
            if(s==den){
                return mul;
            }
            for(auto i: adj[s]){
                if(visited.find(i.second)==visited.end()){
                    visited.insert(i.second);
                    q.push(i.second);
                    r.push(mul*i.first); 
                }
            }
        }
        return double(-1.0);
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> result;
        unordered_map<string,vector<pair<double,string>>> adj;
        for(int i=0;i<equations.size();i++){
            adj[equations[i][0]].push_back({values[i],equations[i][1]});
            adj[equations[i][1]].push_back({double(double(1.0)/values[i]),equations[i][0]});
        }
        
        for(auto i:queries){
            result.push_back(bfs(i[0],i[1], adj));
        }
        return result;
    }
};