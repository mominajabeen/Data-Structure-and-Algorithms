class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        if(intervals.size() < 1){
            res.push_back({newInterval[0], newInterval[1]});
            return res;
        }
        int start = newInterval[0], end = newInterval[1];
        int i = 0;
        while(i<intervals.size() && intervals[i][1] < start){
            res.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }
        while(i<intervals.size() && end >= intervals[i][0]){
            start = min(start, intervals[i][0]);
            end = max(end, intervals[i][1]);
            i++;
            }
            res.push_back({start, end});
            while(i<intervals.size()){
                res.push_back({intervals[i][0], intervals[i][1]});
                i++;
            }
        return res;
    }
};