[Problem](https://leetcode.com/problems/word-ladder/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

A transformation sequence from word beginWord to word endWord using a dictionary wordList is a sequence of words beginWord -> s1 -> s2 -> ... -> sk such that:<br/>

Every adjacent pair of words differs by a single letter.<br/>
Every si for 1 <= i <= k is in wordList. Note that beginWord does not need to be in wordList.<br/>
sk == endWord<br/>
Given two words, beginWord and endWord, and a dictionary wordList, return the number of words in the shortest transformation sequence from beginWord to endWord, or 0 if no such sequence exists.<br/>

 

### Example 1:

**Input:** beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]<br/>
**Output:** 5<br/>
**Explanation:** One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> cog", which is 5 words long.<br/>