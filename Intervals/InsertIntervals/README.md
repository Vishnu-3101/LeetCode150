You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.<br/><br/>

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).<br/><br/>

Return intervals after the insertion.<br/>

 

### Example 1:

**Input:** intervals = [[1,3],[6,9]], newInterval = [2,5]<br/>
**Output:** [[1,5],[6,9]]<br/><br/>


### Example 2:

**Input:** intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]<br/>
**Output:** [[1,2],[3,10],[12,16]]<br/>
**Explanation:** Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10].<br/>