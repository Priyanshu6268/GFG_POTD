class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int32_t ans = 0;
        int32_t n = citations.size();
        for (int32_t i = n-1; i >= 0; --i){
            ans  = max(ans, min(n - i, citations[i]));
        }
        return ans;
    }
};
