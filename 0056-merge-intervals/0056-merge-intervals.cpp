class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<2)  return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
//             if(intervals[i][0]>end){
//                 res.push_back({start, end});

//             }
            if(intervals[i][0] <= end){
                end = max(intervals[i][1], end);
            }
            // if(i == intervals.size()-1){
                // start = intervals[i][0];
                // end = intervals[i][1];
            else{
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        res.push_back({start, end});
        return res;
    }
};