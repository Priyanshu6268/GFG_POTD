class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int ub = upper_bound(arr.begin(),arr.end(),target) - arr.begin();
        int lb = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
        return ub - lb;
    }
};
