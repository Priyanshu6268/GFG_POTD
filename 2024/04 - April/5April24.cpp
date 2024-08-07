class Solution {
  public:

    int min_operations(vector<int>& nums) {
        // Code here
        int n = nums.size();
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++)
            for(int j = 0; j < i; j++)
                if(nums[i] - nums[j] >= i - j)
                    dp[i] = max(dp[i], dp[j] + 1);
        return n - *max_element(dp.begin(), dp.end());
    }
};
