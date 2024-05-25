[Problem](https://leetcode.com/problems/word-break/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.<br/>

Note that the same word in the dictionary may be reused multiple times in the segmentation.<br/>

### Example 1:

**Input**: s = "leetcode", wordDict = ["leet","code"]<br/>
**Output**: true<br/>
**Explanation**: Return true because "leetcode" can be segmented as "leet code".<br/>

### Example 2:

**Input**: s = "applepenapple", wordDict = ["apple","pen"]<br/>
**Output**: true<br/>
**Explanation**: Return true because "applepenapple" can be segmented as "apple pen apple".<br/>
Note that you are allowed to reuse a dictionary word.<br/>

### Example 3:

**Input**: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]<br/>
**Output**: false<br/>