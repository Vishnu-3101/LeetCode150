[Problem](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an array prices where prices[i] is the price of a given stock on the ith day.<br/>

Find the maximum profit you can achieve. You may complete at most two transactions.<br/>

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).<br/>

 

### Example 1:

**Input**: prices = [3,3,5,0,0,3,1,4]<br/>
**Output**: 6<br/>
**Explanation**: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.<br/>
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.<br/>

### Example 2:

**Input**: prices = [1,2,3,4,5]<br/>
**Output**: 4<br/>
**Explanation**: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.<br/>
Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are engaging multiple transactions at the same time. You must sell before buying again.<br/>