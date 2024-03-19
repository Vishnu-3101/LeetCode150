[Problem](https://leetcode.com/problems/evaluate-division/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an array of variable pairs equations and an array of real numbers values, where equations[i] = [Ai, Bi] and values[i] represent the equation Ai / Bi = values[i]. Each Ai or Bi is a string that represents a single variable.<br/>

You are also given some queries, where queries[j] = [Cj, Dj] represents the jth query where you must find the answer for Cj / Dj = ?.<br/>

Return the answers to all queries. If a single answer cannot be determined, return -1.0.<br/>

Note: The input is always valid. You may assume that evaluating the queries will not result in division by zero and that there is no contradiction.<br/>

**Note:** The variables that do not occur in the list of equations are undefined, so the answer cannot be determined for them.<br/>

 

### Example 1:

**Input:** equations = [["a","b"],["b","c"]], values = [2.0,3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]<br/>
**Output:** [6.00000,0.50000,-1.00000,1.00000,-1.00000]<br/>
**Explanation:** <br/>
Given: a / b = 2.0, b / c = 3.0<br/>
queries are: a / c = ?, b / a = ?, a / e = ?, a / a = ?, x / x = ? <br/>
return: [6.0, 0.5, -1.0, 1.0, -1.0 ]<br/>
note: x is undefined => -1.0<br/>