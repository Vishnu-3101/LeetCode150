[Problem](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.<br/>

Find the maximum profit you can achieve. You may complete at most k transactions: i.e. you may buy at most k times and sell at most k times.<br/>

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).<br/>

 

### Example 1:

**Input**: k = 2, prices = [2,4,1]<br/>
**Output**: 2<br/>
**Explanation**: Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2.<br/>

### Example 2:

**Input**: k = 2, prices = [3,2,6,5,0,3]<br/>
**Output**: 7<br/>
**Explanation**: Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4. Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.<br/>