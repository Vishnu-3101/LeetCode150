#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* dfs(vector<vector<int>>&grid, int r, int c,int n){
        bool isSame = true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[r][c]!=grid[i+r][j+c]) isSame = false;
            }
        }
        if(isSame){
            return new Node(grid[r][c],1);
        }
        n = n/2;
        Node* topLeft = dfs(grid, r,c, n);
        Node* topRight = dfs(grid, r,c+n, n);
        Node* bottomLeft = dfs(grid, r+n,c, n);
        Node* bottomRight = dfs(grid, r+n,c+n, n);
        return new Node(1,0,topLeft,topRight,bottomLeft,bottomRight);

    }
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return dfs(grid,0,0,n);
    }
};