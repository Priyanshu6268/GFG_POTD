class Solution {
public:
    int FindMaxSum(int arr[], int n) {
        vector<int> dp(n, 0);
        int out = 0;
        
        for (int i = 0; i < n; ++i) {
            if (i >= 2)
                dp[i] = dp[i - 2];
            if (i >= 3)
                dp[i] = max(dp[i], dp[i - 3]);

            dp[i] += arr[i];
            out = max(out, dp[i]);
        }
        
        return out;
    }
};
