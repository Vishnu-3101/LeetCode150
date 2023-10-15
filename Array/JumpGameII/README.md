You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].<br/>

Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at nums[i], you can jump to any nums[i + j] where:<br/>

0 <= j <= nums[i] and<br/>
i + j < n<br/>
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].<br/>

 

### Example 1:

Input: nums = [2,3,1,1,4]<br/>
Output: 2<br/>
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.<br/>