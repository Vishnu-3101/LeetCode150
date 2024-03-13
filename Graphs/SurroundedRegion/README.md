[Problem](https://leetcode.com/problems/surrounded-regions/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'.<br/>

A region is captured by flipping all 'O's into 'X's in that surrounded region.<br/>

 

### Example 1:


**Input:** board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]<br/>
**Output:** [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]<br/>
**Explanation:** Notice that an 'O' should not be flipped if:<br/>
- It is on the border, or<br/>
- It is adjacent to an 'O' that should not be flipped.<br/>
The bottom 'O' is on the border, so it is not flipped.<br/>
The other three 'O' form a surrounded region, so they are flipped.<br/>