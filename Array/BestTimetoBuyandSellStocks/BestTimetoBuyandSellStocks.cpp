#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0];
        int maxPro = 0;
        for(int i=1;i<n;i++){
            buy = min(buy,prices[i]);
            maxPro = max(maxPro,prices[i]-buy);
        }
        return maxPro;
    }
};