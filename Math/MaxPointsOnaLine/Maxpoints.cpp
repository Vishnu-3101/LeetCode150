#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {      
        int n = points.size();
        int result = 1;
        for(int i=0;i<n;i++){
            unordered_map<double,int> count;
            for(int j=i+1;j<n;j++){
                double slope = INT_MAX;
                if(points[i][0]!=points[j][0]){
                    slope = (double)(points[i][1] - points[j][1])/(double)(points[i][0] - points[j][0]);
                }
                cout<<slope<<endl;
                count[slope]++;
                result = max(result,count[slope]+1);
            }
        }
        return result;
    }
};