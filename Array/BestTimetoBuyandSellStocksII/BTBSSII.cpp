#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        int buy = prices[0];
        for(int i=1;i<prices.size();i++){
            int sell = prices[i]-buy;
            if(sell>0){
                maxpro+=sell;
                buy = prices[i];
            }
            if(sell<maxpro){
                buy = prices[i];
            }
        }
        return maxpro;
    }
};