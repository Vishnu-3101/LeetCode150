[Problem](https://leetcode.com/problems/interleaving-string/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.<br/>

An interleaving of two strings s and t is a configuration where s and t are divided into n and m substrings respectively, such that:<br/>

s = s1 + s2 + ... + sn<br/>
t = t1 + t2 + ... + tm<br/>
|n - m| <= 1<br/>
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...<br/>
Note: a + b is the concatenation of strings a and b.<br/>

### Example 1:

**Input**: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"<br/>
**Output**: true<br/>
**Explanation**: One way to obtain s3 is:<br/>
Split s1 into s1 = "aa" + "bc" + "c", and s2 into s2 = "dbbc" + "a".<br/>
Interleaving the two splits, we get "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".<br/>
Since s3 can be obtained by interleaving s1 and s2, we return true.<br/>

### Example 2:

**Input**: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"<br/>
**Output**: false<br/>
**Explanation**: Notice how it is impossible to interleave s2 with any other string to obtain s3.<br/>