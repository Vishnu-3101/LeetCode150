You are given three strings s1, s2, and s3. You have to perform the following operation on these three strings as many times as you want.<br/>

In one operation you can choose one of these three strings such that its length is at least 2 and delete the rightmost character of it.<br/>

Return the minimum number of operations you need to perform to make the three strings equal if there is a way to make them equal, otherwise, return -1.<br/>

 

### Example 1:

Input: s1 = "abc", s2 = "abb", s3 = "ab"<br/>
Output: 2<br/>
Explanation: Performing operations on s1 and s2 once will lead to three equal strings.<br/>
It can be shown that there is no way to make them equal with less than two operations.<br/>