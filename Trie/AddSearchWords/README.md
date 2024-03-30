[Problem](https://leetcode.com/problems/design-add-and-search-words-data-structure/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Design a data structure that supports adding new words and finding if a string matches any previously added string.<br/>

Implement the WordDictionary class:<br/>

WordDictionary() Initializes the object.<br/>
void addWord(word) Adds word to the data structure, it can be matched later.<br/>
bool search(word) Returns true if there is any string in the data structure that matches word or false otherwise. word may contain dots '.' where dots can be matched with any letter.<br/>
 

### Example:

**Input:**<br/>
["WordDictionary","addWord","addWord","addWord","search","search","search","search"]<br/>
[[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]<br/>
**Output:**<br/>
[null,null,null,null,false,true,true,true]<br/>