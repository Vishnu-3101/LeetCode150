[Problem](https://leetcode.com/problems/clone-graph/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given a reference of a node in a connected undirected graph.<br/>

Return a deep copy (clone) of the graph.<br/>

Each node in the graph contains a value (int) and a list (List[Node]) of its neighbors.<br/>

class Node {<br/>
    public int val;<br/>
    public List<Node> neighbors;<br/>
}<br/>
 

Test case format:<br/>

For simplicity, each node's value is the same as the node's index (1-indexed). For example, the first node with val == 1, the second node with val == 2, and so on. The graph is represented in the test case using an adjacency list.<br/>

An adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors of a node in the graph.<br/>

The given node will always be the first node with val = 1. You must return the copy of the given node as a reference to the cloned graph.<br/>

### Example 1:

**Input:** adjList = [[2,4],[1,3],[2,4],[1,3]]<br/>
**Output:** [[2,4],[1,3],[2,4],[1,3]]<br/>
**Explanation:** There are 4 nodes in the graph.<br/>
1st node (val = 1)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).<br/>
2nd node (val = 2)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).<br/>
3rd node (val = 3)'s neighbors are 2nd node (val = 2) and 4th node (val = 4).<br/>
4th node (val = 4)'s neighbors are 1st node (val = 1) and 3rd node (val = 3).<br/>