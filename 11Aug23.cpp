class Solution {
public:
    long long int count(int coins[], int N, int sum) {
        vector<vector<long long int>> dp(N + 1, vector<long long int>(sum + 1, 0));

        for (int i = 0; i <= N; i++) {
            dp[i][0] = 1;  // Base case: there's one way to make a sum of 0, i.e., by not selecting any coin.
        }

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= sum; j++) {
                dp[i][j] = dp[i - 1][j];  // Exclude the current coin

                if (coins[i - 1] <= j) {
                    dp[i][j] += dp[i][j - coins[i - 1]];  // Include the current coin
                }

     // Take modulo to prevent overflow
            }
        }

        return dp[N][sum];
    }
};
