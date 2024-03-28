[Problem](https://leetcode.com/problems/minimum-genetic-mutation/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

A gene string can be represented by an 8-character long string, with choices from 'A', 'C', 'G', and 'T'.<br/>

Suppose we need to investigate a mutation from a gene string startGene to a gene string endGene where one mutation is defined as one single character changed in the gene string.<br/>

For example, "AACCGGTT" --> "AACCGGTA" is one mutation.<br/>
There is also a gene bank bank that records all the valid gene mutations. A gene must be in bank to make it a valid gene string.<br/>

Given the two gene strings startGene and endGene and the gene bank bank, return the minimum number of mutations needed to mutate from startGene to endGene. If there is no such a mutation, return -1.<br/>

Note that the starting point is assumed to be valid, so it might not be included in the bank.<br/>

 

### Example 1:

**Input:** startGene = "AACCGGTT", endGene = "AACCGGTA", bank = ["AACCGGTA"]<br/>
**Output:** 1<br/>

### Example 2:

**Input:** startGene = "AACCGGTT", endGene = "AAACGGTA", bank = ["AACCGGTA","AACCGCTA","AAACGGTA"]<br/>
**Output:** 2<br/>