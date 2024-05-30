[Problem](https://leetcode.com/problems/unique-paths-ii/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an m x n integer array grid. There is a robot initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.<br/>

An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include any square that is an obstacle.<br/>

Return the number of possible unique paths that the robot can take to reach the bottom-right corner.<br/>

The testcases are generated so that the answer will be less than or equal to 2 * 109.<br/>

### Example 1:

**Input**: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]<br/>
**Output**: 2<br/>
**Explanation**: There is one obstacle in the middle of the 3x3 grid above.<br/>
There are two ways to reach the bottom-right corner:<br/>
1. Right -> Right -> Down -> Down<br/>
2. Down -> Down -> Right -> Right<br/>

### Example 2:

**Input**: obstacleGrid = [[0,1],[0,0]]<br/>
**Output**: 1<br/>