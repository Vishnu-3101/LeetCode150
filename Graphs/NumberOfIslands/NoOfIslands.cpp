#include<bits/stdc++.h>
using namespace std;

// DFS

class Solution1 {
public:
    void dfs(vector<vector<char>>& grid, int i, int j , vector<vector<int>> &visited){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0' || visited[i][j]) return;
        visited[i][j] = '1';
        dfs(grid,i+1,j, visited);
        dfs(grid,i-1,j, visited);
        dfs(grid,i,j+1, visited);
        dfs(grid,i,j-1, visited);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int result = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(grid,i,j, visited);
                    result++;
                }
            }
        }
        return result;
    }
};

// BFS

class Solution2 {
public:
    void bfs(vector<vector<char>>& grid, int i, int j , vector<vector<int>> &visited){
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j]=1;
        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if(i+1<n && grid[i+1][j]=='1' && !visited[i+1][j]){
                q.push({i+1,j});
                visited[i+1][j]=1;
            }
            if(i-1>=0 && grid[i-1][j]=='1' && !visited[i-1][j]){
                q.push({i-1,j});
                visited[i-1][j]=1;
            }
            if(j+1<m && grid[i][j+1]=='1' && !visited[i][j+1]){
                q.push({i,j+1});
                visited[i][j+1]=1;
            }
            if(j-1>=0 && grid[i][j-1]=='1' && !visited[i][j-1]){
                q.push({i,j-1});
                visited[i][j-1]=1;
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int result=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    bfs(grid,i,j, visited);
                    result++;
                }
            }
        }
        return result;
    }
};