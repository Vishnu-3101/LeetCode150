[Problem](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:<br/>

[4,5,6,7,0,1,2] if it was rotated 4 times.<br/>
[0,1,2,4,5,6,7] if it was rotated 7 times.<br/>
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].<br/>

Given the sorted rotated array nums of unique elements, return the minimum element of this array.<br/>

You must write an algorithm that runs in O(log n) time.<br/>

 

### Example 1:

**Input**: nums = [3,4,5,1,2]<br/>
**Output**: 1<br/>
**Explanation**: The original array was [1,2,3,4,5] rotated 3 times.<br/>