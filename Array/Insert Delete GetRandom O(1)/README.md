[Problem](https://leetcode.com/problems/insert-delete-getrandom-o1/submissions/1284990679/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Implement the RandomizedSet class:<br/>

RandomizedSet() Initializes the RandomizedSet object.<br/>
bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.<br/>
bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.<br/>
int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.<br/>
You must implement the functions of the class such that each function works in average O(1) time complexity.<br/>

 

### Example 1:

**Input:**<br/>
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]<br/>
[[], [1], [2], [2], [], [1], [2], []]
**Output:**<br/>
[null, true, false, true, 2, true, false, 2]<br/>
