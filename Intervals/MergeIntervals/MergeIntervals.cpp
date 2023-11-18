#include<bits/stdc++.h>
using namespace std;

// Optimal solution
class Solution2 {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end = intervals[0][1];
        int n=intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                if(end<intervals[i][1]) end = intervals[i][1];
            }
            else{
                result.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        result.push_back({start,end});
        return result;
    }
};

// Optimal solution without using extra variables

class Solution2 {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++){
            if(result.empty() || intervals[i][0]>result.back()[1]){
                result.push_back(intervals[i]);
            }
            else{
                result.back()[1] = max(intervals[i][1],result.back()[1]);
            }
        }
        return result;
    }
};