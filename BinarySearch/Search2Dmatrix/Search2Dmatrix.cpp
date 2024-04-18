#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool binarySearch(vector<vector<int>>& matrix,int start, int end, int target){
        if(start>end) return false;
        int mid = start + (end - start) / 2;
        int n = matrix[0].size();
        if(matrix[mid/n][mid%n]==target) return true;
        if(matrix[mid/n][mid%n]>target) return binarySearch(matrix,start,mid-1,target);
        return binarySearch(matrix,mid+1,end,target);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        return binarySearch(matrix,0,m*n-1,target);
    }
};