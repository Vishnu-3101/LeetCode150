[Problem](https://leetcode.com/problems/course-schedule/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.<br/>

For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.<br/>
Return true if you can finish all courses. Otherwise, return false.<br/>

 

### Example 1:

**Input:** numCourses = 2, prerequisites = [[1,0]]<br/>
**Output:** true<br/>
**Explanation:** There are a total of 2 courses to take. <br/>
To take course 1 you should have finished course 0. So it is possible.<br/>

### Example 2:

**Input:** numCourses = 2, prerequisites = [[1,0],[0,1]]<br/>
**Output:** false<br/>
**Explanation:** There are a total of 2 courses to take. <br/>
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.<br/>
 