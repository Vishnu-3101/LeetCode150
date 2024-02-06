[Problem](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given a binary tree<br/>

struct Node {<br/>
  int val;<br/>
  Node *left;<br/>
  Node *right;<br/>
  Node *next;<br/>
}<br/>
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.<br/>

Initially, all next pointers are set to NULL.<br/>

 

### Example 1:


**Input:** root = [1,2,3,4,5,null,7]<br/>
**Output:** [1,#,2,3,#,4,5,7,#]<br/>
**Explanation:** Given the above binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.<br/>