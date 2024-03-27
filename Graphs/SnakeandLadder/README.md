[Problem](https://leetcode.com/problems/snakes-and-ladders/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

You are given an n x n integer matrix board where the cells are labeled from 1 to n2 in a Boustrophedon style starting from the bottom left of the board (i.e. board[n - 1][0]) and alternating direction each row.<br/>

You start on square 1 of the board. In each move, starting from square curr, do the following:<br/>

Choose a destination square next with a label in the range [curr + 1, min(curr + 6, n2)].<br/>
This choice simulates the result of a standard 6-sided die roll: i.e., there are always at most 6 destinations, regardless of the size of the board.<br/>
If next has a snake or ladder, you must move to the destination of that snake or ladder. Otherwise, you move to next.
The game ends when you reach the square n2.<br/>
A board square on row r and column c has a snake or ladder if board[r][c] != -1. The destination of that snake or ladder is board[r][c]. Squares 1 and n2 do not have a snake or ladder.<br/>

Note that you only take a snake or ladder at most once per move. If the destination to a snake or ladder is the start of another snake or ladder, you do not follow the subsequent snake or ladder.<br/>

For example, suppose the board is [[-1,4],[-1,3]], and on the first move, your destination square is 2. You follow the ladder to square 3, but do not follow the subsequent ladder to 4.<br/>
Return the least number of moves required to reach the square n2. If it is not possible to reach the square, return -1.<br/>

 

### Example 1:


**Input:** board = [[-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1],[-1,-1,-1,-1,-1,-1],[-1,35,-1,-1,13,-1],[-1,-1,-1,-1,-1,-1],[-1,15,-1,-1,-1,-1]]<br/>
**Output:** 4<br/>
**Explanation:** <br/>
In the beginning, you start at square 1 (at row 5, column 0).<br/>
You decide to move to square 2 and must take the ladder to square 15.<br/>
You then decide to move to square 17 and must take the snake to square 13.<br/>
You then decide to move to square 14 and must take the ladder to square 35.<br/>
You then decide to move to square 36, ending the game.<br/>
This is the lowest possible number of moves to reach the last square, so return 4.<br/>