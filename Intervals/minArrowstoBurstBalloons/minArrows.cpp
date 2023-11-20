#include<bits/stdc++.h>
using namespace std;

// sort by end of points

class Solution1 {
public:
    static bool comp(vector<int> &a, vector<int> &b){
        return a[1]<b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),comp);
        int n=points.size();
        int arrows = 1;
        int current_end = points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]>current_end){
                current_end = points[i][1];
                arrows++;
            }
        }
        return arrows;
    }
};

// sort by start of points

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        int arrows = 1;
        int current_end = points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]>current_end){
                current_end = points[i][1];
                arrows++;
            }
            current_end = min(points[i][1],current_end);
        }
        return arrows;
    }
};