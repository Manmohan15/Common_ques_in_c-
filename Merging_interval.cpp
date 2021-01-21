class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) {
            return {};
        }
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end(), 
             [](const vector<int> &a, const vector<int> &b) {
                 return a[0] < b[0];
             });
        int start = intervals[0][0], end = intervals[0][1];
        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] > end) {
                res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            } else {
                end = max(intervals[i][1], end);
            }
        }
        res.push_back({start, end});
        return res;
    }
};
