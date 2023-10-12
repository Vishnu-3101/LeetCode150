You are given a string s and an array of strings words. All the strings of words are of the same length.<br/>

A concatenated substring in s is a substring that contains all the strings of any permutation of words concatenated.<br/>

For example, if words = ["ab","cd","ef"], then "abcdef", "abefcd", "cdabef", "cdefab", "efabcd", and "efcdab" are all concatenated strings. "acdbef" is not a concatenated substring because it is not the concatenation of any permutation of words.<br/>
Return the starting indices of all the concatenated substrings in s. You can return the answer in any order.<br/>

 

### Example 1:

Input: s = "barfoothefoobarman", words = ["foo","bar"]<br/>
Output: [0,9]<br/>
Explanation: Since words.length == 2 and words[i].length == 3, the concatenated substring has to be of length 6.<br/>
The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"] which is a permutation of words.<br/>
The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"] which is a permutation of words.<br/>
The output order does not matter. Returning [9,0] is fine too.<br/>