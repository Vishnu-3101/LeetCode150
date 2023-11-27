[Problem](https://leetcode.com/problems/linked-list-cycle/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given head, the head of a linked list, determine if the linked list has a cycle in it.<br/>

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.<br/>

Return true if there is a cycle in the linked list. Otherwise, return false.<br/>

 

### Example 1:


**Input:** head = [3,2,0,-4], pos = 1<br/>
**Output:** true<br/>
**Explanation:** There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).<br/>