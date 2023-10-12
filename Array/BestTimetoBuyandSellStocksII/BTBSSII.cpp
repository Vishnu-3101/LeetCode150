#include<bits/stdc++.h>
using namespace std;


class Solution1 {
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

// a much simpler solution for the problem. If we get a profit the next day sell the stock.
// Add the profit to total profit

class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                maxpro+=(prices[i]-prices[i-1]);
            }
        }
        return maxpro;
    }
};