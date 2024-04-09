class Solution {
public:
    int minPoints(int m, int n, vector<vector<int>>& points) {
        // If the grid is empty, return 0
        if (m == 0)
            return 0;

        // Dynamic Programming table with dimensions (m+1) x (n+1)
        // Initialized with all values set to INT_MAX
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX));

        // Initializing the cell to the bottom and right of the princess' cell with value 1.
        dp[m - 1][n] = 1;
        dp[m][n - 1] = 1;

        // Iterating over dp excluding the additional row and column we added.
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                // Value is minimum health to land on next - health needed to stay
                dp[i][j] = max(1, (min(dp[i + 1][j], dp[i][j + 1]) - points[i][j]));
            }
        }

        // Return the minimum health required to reach the princess' cell
        return dp[0][0];
    }
};
