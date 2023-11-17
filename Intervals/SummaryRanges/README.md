[Problem](https://leetcode.com/problems/summary-ranges/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given a sorted unique integer array nums.<br/>

A range [a,b] is the set of all integers from a to b (inclusive).<br/>

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.<br/>

Each range [a,b] in the list should be output as:<br/>

"a->b" if a != b<br/>
"a" if a == b<br/>
 

### Example 1:

**Input:** nums = [0,1,2,4,5,7]<br/>
**Output:** ["0->2","4->5","7"]<br/>
**Explanation:** The ranges are:<br/>
[0,2] --> "0->2"<br/>
[4,5] --> "4->5"<br/>
[7,7] --> "7"<br/>