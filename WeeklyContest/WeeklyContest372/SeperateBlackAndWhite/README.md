There are n balls on a table, each ball has a color black or white.<br/>

You are given a 0-indexed binary string s of length n, where 1 and 0 represent black and white balls, respectively.<br/>

In each step, you can choose two adjacent balls and swap them.<br/>

Return the minimum number of steps to group all the black balls to the right and all the white balls to the left.<br/>

 

### Example 1:

Input: s = "101"<br/>
Output: 1<br/>
Explanation: We can group all the black balls to the right in the following way:<br/>
- Swap s[0] and s[1], s = "011".<br/>
Initially, 1s are not grouped together, requiring at least 1 step to group them to the right.<br/>