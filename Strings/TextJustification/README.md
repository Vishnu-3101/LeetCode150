[Problem](https://leetcode.com/problems/text-justification/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

Given an array of strings words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.<br/>

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly maxWidth characters.<br/>

Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.<br/>

For the last line of text, it should be left-justified, and no extra space is inserted between words.<br/>

**Note**:<br/>

- A word is defined as a character sequence consisting of non-space characters only.
- Each word's length is guaranteed to be greater than 0 and not exceed maxWidth.
- The **input** array words contains at least one word.
 

### Example 1:

**Input**: words = ["This", "is", "an", "### example", "of", "text", "justification."], maxWidth = 16<br/>
**Output**:<br/>
[<br/>
   "This    is    an",<br/>
   "### example  of text",<br/>
   "justification.  "<br/>
]<br/>

### Example 2:

**Input**: words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16<br/>
**Output**:<br/>
[
  "What   must   be",<br/>
  "acknowledgment  ",<br/>
  "shall be        "<br/>
]
**Explanation**: Note that the last line is "shall be    " instead of "shall     be", because the last line must be left-justified instead of fully-justified.<br/>
Note that the second line is also left-justified because it contains only one word.<br/>