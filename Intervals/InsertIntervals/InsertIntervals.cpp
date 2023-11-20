// Easy to understand code

class Solution1 {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int n = intervals.size();
        int i=0;
        // newInterval present to the right.
        while(i<n && newInterval[0]>intervals[i][1]){
            result.push_back(intervals[i++]);
        }
        // newInterval Overlapping
        while(i<n && newInterval[1]>=intervals[i][0]){
            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
            i++;
        }
        result.push_back(newInterval);
        // newInterval present to the right as newInterval already inserted at the top line
        while(i<n){
            result.push_back(intervals[i++]);
        }
        return result;
    }
};

// Another way of solving

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int n = intervals.size();
    
        for(int i=0;i<n;i++){
            // newInterval present to the left
            if(intervals[i][0]>newInterval[1]){
                result.push_back(newInterval);
                for(int j=i;j<n;j++){
                    result.push_back(intervals[j]);
                }
                return result;
            }

            // newInterval present to the right
            else if(intervals[i][1]<newInterval[0]){
                result.push_back(intervals[i]);
            }

            // Overlapping interval.
            else{
                newInterval = {min(newInterval[0],intervals[i][0]),max(newInterval[1],intervals[i][1])};
            }
        }
        result.push_back(newInterval);
        return result;
    }
};