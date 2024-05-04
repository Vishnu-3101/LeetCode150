[Problem](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given two integer arrays nums1 and nums2 sorted in non-decreasing order and an integer k.<br/>

Define a pair (u, v) which consists of one element from the first array and one element from the second array.<br/>

Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums.<br/>

 

### Example 1:

**Input**: nums1 = [1,7,11], nums2 = [2,4,6], k = 3<br/>
**Output**: [[1,2],[1,4],[1,6]]<br/>
**Explanation**: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]<br/>

### Example 2:

**Input**: nums1 = [1,1,2], nums2 = [1,2,3], k = 2<br/>
**Output**: [[1,1],[1,1]]<br/>
**Explanation**: The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]<br/>