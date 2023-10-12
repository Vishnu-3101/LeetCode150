#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1=0;
        int p2=height.size()-1;
        int maxwater=0;
        while(p1<p2){
            int m = min(height[p1],height[p2]);
            maxwater = max(maxwater,(p2-p1)*m);
            if(height[p1]>height[p2]){
                p2--;
            }
            else{
                p1++;
            }
        }
        return maxwater;
    }
};