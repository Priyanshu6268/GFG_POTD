class Solution {
public:
    int mod = 1e9 + 7;

    long long solve(int n, int i, vector<long long>& dp) {
        if (i == n)
            return 1;

        if (dp[i] != -1)
            return dp[i];

        long long cnt = 0;
        for (int d = 1; d <= 3; ++d) {
            if (i + d <= n)
                cnt = (cnt + solve(n, i + d, dp)) % mod;
        }

        return dp[i] = cnt;
    }

    long long countWays(int n) {
        vector<long long> dp(n, -1);
        return solve(n, 0, dp);
    }
};
