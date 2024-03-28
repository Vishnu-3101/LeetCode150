#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMutation(string s,string t){
        int n=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) n++;
        }
        return n;
    }
    
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        queue<string> q;
        q.push(startGene);
        int steps=0;
        unordered_set<string> visited;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                string mutated = q.front();
                // cout<<mutated<<endl;
                q.pop();
                if(mutated==endGene) return steps;
                for(auto j:bank){
                    int noofMut = findMutation(mutated,j);
                    
                    if(noofMut==1 && visited.find(j)==visited.end()){
                        visited.insert(j);
                        q.push(j);
                    }
                }
            }
            steps++;
        }
        return -1;
    }  
};