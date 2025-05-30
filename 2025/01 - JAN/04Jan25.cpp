class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0;
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                int req = target - (arr[i] + arr[j]);
                auto low = lower_bound(arr.begin()+j+1, arr.end(), req);
                auto high = upper_bound(arr.begin()+j+1, arr.end(), req);
                ans += (high-low);
            }
        }
        return ans;
    }
};
