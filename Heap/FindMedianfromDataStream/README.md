[Problem](https://leetcode.com/problems/find-median-from-data-stream/description/?envType=study-plan-v2&envId=top-interview-150)<br/><br/>

The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.<br/>

For example, for arr = [2,3,4], the median is 3.<br/>
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.<br/>
Implement the MedianFinder class:<br/>

MedianFinder() initializes the MedianFinder object.<br/>
void addNum(int num) adds the integer num from the data stream to the data structure.<br/>
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.<br/>
 

### Example 1:

**Input**:<br/>
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]<br/>
[[], [1], [2], [], [3], []]<br/>
**Output**:<br/>
[null, null, null, 1.5, null, 2.0]<br/>

**Explanation**:<br/>
MedianFinder medianFinder = new MedianFinder();<br/>
medianFinder.addNum(1);    // arr = [1]<br/>
medianFinder.addNum(2);    // arr = [1, 2]<br/>
medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)<br/>
medianFinder.addNum(3);    // arr[1, 2, 3]<br/>
medianFinder.findMedian(); // return 2.0<br/>