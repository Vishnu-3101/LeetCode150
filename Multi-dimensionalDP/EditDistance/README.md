[Problem](https://leetcode.com/problems/edit-distance/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.<br/>

You have the following three operations permitted on a word:<br/>
- Insert a character
- Delete a character
- Replace a character
 

### Example 1:

**Input**: word1 = "horse", word2 = "ros"<br/>
**Output**: 3<br/>
**Explanation**: <br/>
horse -> rorse (replace 'h' with 'r')<br/>
rorse -> rose (remove 'r')<br/>
rose -> ros (remove 'e')<br/>


### Example 2:

**Input**: word1 = "intention", word2 = "execution"<br/>
**Output**: 5<br/>
**Explanation**: <br/>
intention -> inention (remove 't')<br/>
inention -> enention (replace 'i' with 'e')<br/>
enention -> exention (replace 'n' with 'x')<br/>
exention -> exection (replace 'n' with 'c')<br/>
exection -> execution (insert 'u')<br/>