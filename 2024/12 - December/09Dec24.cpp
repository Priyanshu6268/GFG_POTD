class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>>ans;
        
        vector<int>el = intervals[0];
        for(int i=1; i<n; i++){
            if(intervals[i][0] > el[1]){
                ans.push_back(el);
                el = intervals[i];
            }else{
                el[1] = max(el[1], intervals[i][1]);
            }
        }
        ans.push_back(el);
        return ans;
    }
};
