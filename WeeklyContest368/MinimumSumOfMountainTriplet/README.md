You are given a 0-indexed array nums of integers.<br/>

A triplet of indices (i, j, k) is a mountain if:<br/>

i < j < k<br/>
nums[i] < nums[j] and nums[k] < nums[j]<br/>
Return the minimum possible sum of a mountain triplet of nums. If no such triplet exists, return -1.<br/>

 

### Example 1:

**Input:** nums = [8,6,1,5,3]<br/>
**Output:** 9<br/>
**Explanation:** Triplet (2, 3, 4) is a mountain triplet of sum 9 since: <br/>
- 2 < 3 < 4<br/>
- nums[2] < nums[3] and nums[4] < nums[3]<br/>
And the sum of this triplet is nums[2] + nums[3] + nums[4] = 9. It can be shown that there are no mountain triplets with a sum of less than 9.<br/>