[Problem](https://leetcode.com/problems/evaluate-reverse-polish-notation/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.<br/>

Evaluate the expression. Return an integer that represents the value of the expression.<br/>

Note that:<br/>

The valid operators are '+', '-', '*', and '/'.<br/>
Each operand may be an integer or another expression.<br/>
The division between two integers always truncates toward zero.<br/>
There will not be any division by zero.<br/>
The input represents a valid arithmetic expression in a reverse polish notation.<br/>
The answer and all the intermediate calculations can be represented in a 32-bit integer.<br/>
 

### Example 1:

**Input:** tokens = ["2","1","+","3","*"]<br/>
**Output:** 9<br/>
**Explanation:** ((2 + 1) * 3) = 9<br/>