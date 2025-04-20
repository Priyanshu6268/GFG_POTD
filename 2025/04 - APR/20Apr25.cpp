class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        int n = arr.size();
        int xr = arr[0];
        for(int i = 1;i<n;i++){
            xr ^= arr[i]^i;
        }
        return xr;
    }
};
