Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.<br/>

Implement the MinStack class:<br/>

`MinStack()` initializes the stack object.<br/>
`void push(int val)` pushes the element val onto the stack.<br/>
`void pop()` removes the element on the top of the stack.<br/>
`int top()` gets the top element of the stack.<br/>
`int getMin()` retrieves the minimum element in the stack.<br/>
You must implement a solution with O(1) time complexity for each function.<br/>

 

### Example 1:

**Input:**<br/>
["MinStack","push","push","push","getMin","pop","top","getMin"]<br/>
[[],[-2],[0],[-3],[],[],[],[]]<br/>

**Output:**<br/>
[null,null,null,null,-3,null,0,-2]<br/>

**Explanation:**<br/>
MinStack minStack = new MinStack();<br/>
minStack.push(-2);<br/>
minStack.push(0);<br/>
minStack.push(-3);<br/>
minStack.getMin(); // return -3<br/>
minStack.pop();<br/>
minStack.top();    // return 0<br/>
minStack.getMin(); // return -2<br/>