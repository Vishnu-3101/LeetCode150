[Problem](https://leetcode.com/problems/search-a-2d-matrix/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an m x n integer matrix matrix with the following two properties:<br/>

Each row is sorted in non-decreasing order.<br/>
The first integer of each row is greater than the last integer of the previous row.<br/>
Given an integer target, return true if target is in matrix or false otherwise.<br/>

You must write a solution in O(log(m * n)) time complexity.<br/>

 

### Example 1:


**Input:** matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3<br/>
**Output**: true<br/>


### Example 2:

**Input**: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13<br/>
**Output**: false<br/>