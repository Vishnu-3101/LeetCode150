[Problem](https://leetcode.com/problems/simplify-path/description/?envType=study-plan-v2&envId=top-interview-15)<br/><br/>

Given a string path, which is an absolute path (starting with a slash '/') to a file or directory in a Unix-style file system, convert it to the simplified canonical path.<br/>

In a Unix-style file system, a period '.' refers to the current directory, a double period '..' refers to the directory up a level, and any multiple consecutive slashes (i.e. '//') are treated as a single slash '/'. For this problem, any other format of periods such as '...' are treated as file/directory names.<br/>

The canonical path should have the following format:<br/>

The path starts with a single slash '/'.<br/>
Any two directories are separated by a single slash '/'.<br/>
The path does not end with a trailing '/'.<br/>
The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period '.' or double period '..')<br/>
Return the simplified canonical path.<br/>

 

### Example 1:

**Input:** path = "/home/vishnu/..////./"<br/>
**Output:** "/home"<br/>