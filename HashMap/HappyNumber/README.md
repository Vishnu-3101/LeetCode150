[Problem](https://leetcode.com/problems/happy-number/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Write an algorithm to determine if a number n is happy.<br/>

A happy number is a number defined by the following process:<br/>

Starting with any positive integer, replace the number by the sum of the squares of its digits.<br/>
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.<br/>
Those numbers for which this process ends in 1 are happy.<br/>
Return true if n is a happy number, and false if not.<br/>

 

### Example 1:

**Input:** n = 19<br/>
**Output:** true<br/>
**Explanation:**<br/>
12 + 92 = 82<br/>
82 + 22 = 68<br/>
62 + 82 = 100<br/>
12 + 02 + 02 = 1<br/>