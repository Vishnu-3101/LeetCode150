#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalgas=0;
        int totalcost=0;
        int currentgas=0;
        int start=0;
        for(int i=0;i<n;i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
            currentgas+=gas[i]-cost[i];
            if(currentgas<0){
                currentgas=0;
                start=i+1;
            }
        }
        if(totalgas>=totalcost){
            return start;
        }
        else{
            return -1;
        }
    }
};