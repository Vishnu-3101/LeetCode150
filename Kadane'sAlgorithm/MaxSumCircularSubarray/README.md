[Problem](https://leetcode.com/problems/maximum-sum-circular-subarray/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.<br/>

A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].<br/>

A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j], there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.<br/>

 

### Example 1:

**Input:** nums = [1,-2,3,-2]<br/>
**Output:** 3<br/>
**Explanation**: Subarray [3] has maximum sum 3.<br/>
