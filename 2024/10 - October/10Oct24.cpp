class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++) {
            mp[arr[i]] = i;
        }
        int maxi = 0;
        for(int i=0; i<arr.size(); i++) {
            int dis = mp[arr[i]] - i;
            maxi = max(maxi, dis);
        }
        return maxi;
    }
};
