[Problem](https://leetcode.com/problems/construct-quad-tree/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given a n * n matrix grid of 0's and 1's only. We want to represent grid with a Quad-Tree.<br/>

Return the root of the Quad-Tree representing grid.<br/>

A Quad-Tree is a tree data structure in which each internal node has exactly four children. Besides, each node has two attributes:<br/>

val: True if the node represents a grid of 1's or False if the node represents a grid of 0's. Notice that you can assign the val to True or False when isLeaf is False, and both are accepted in the answer.<br/>
isLeaf: True if the node is a leaf node on the tree or False if the node has four children.<br/>
``` bash
class Node {
    public boolean val;
    public boolean isLeaf;
    public Node topLeft;
    public Node topRight;
    public Node bottomLeft;
    public Node bottomRight;
}
```
We can construct a Quad-Tree from a two-dimensional area using the following steps:<br/>

If the current grid has the same value (i.e all 1's or all 0's) set isLeaf True and set val to the value of the grid and set the four children to Null and stop.<br/>
If the current grid has different values, set isLeaf to False and set val to any value and divide the current grid into four sub-grids as shown in the photo.<br/>
Recurse for each of the children with the proper sub-grid.<br/>

If you want to know more about the Quad-Tree, you can refer to the wiki.<br/>

Quad-Tree format:<br/>

You don't need to read this section for solving the problem. This is only if you want to understand the output format here. The output represents the serialized format of a Quad-Tree using level order traversal, where null signifies a path terminator where no node exists below.<br/>

It is very similar to the serialization of the binary tree. The only difference is that the node is represented as a list [isLeaf, val].<br/>

If the value of isLeaf or val is True we represent it as 1 in the list [isLeaf, val] and if the value of isLeaf or val is False we represent it as 0.<br/>

 

### Example 1:


**Input:** grid = [[0,1],[1,0]]<br/>
**Output:** [[0,1],[1,0],[1,1],[1,1],[1,0]]<br/>


### Example 2:

**Input:** grid = [[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,1,1,1,1],[1,1,1,1,1,1,1,1],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0],[1,1,1,1,0,0,0,0]]<br/>
**Output:** [[0,1],[1,1],[0,1],[1,1],[1,0],null,null,null,null,[1,0],[1,0],[1,1],[1,1]]<br/>
**Explanation:** All values in the grid are not the same. We divide the grid into four sub-grids.<br/>
The topLeft, bottomLeft and bottomRight each has the same value.<br/>
The topRight have different values so we divide it into 4 sub-grids where each has the same value.<br/>