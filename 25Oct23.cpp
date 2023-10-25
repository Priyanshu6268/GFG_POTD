class Solution {
public:
    int knapSack(int N, int W, int val[], int wt[]) {
        vector<int> dp(W + 1, 0);
        for (int i = 0; i < N; i++) {
            for (int w = wt[i]; w <= W; w++) {
                dp[w] = max(dp[w], dp[w - wt[i]] + val[i]);
            }
        }
        return dp[W];
    }
};
