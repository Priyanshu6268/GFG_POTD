class Solution {
  public:
    int uniquePaths(vector<vector<int>> &grid, int i, int j, int dp[]) {
        int n = grid[0].size()*i+j;
        if (dp[n] != -1) return dp[n];
        else {
            // Base conditions
            if ((i == grid.size() - 1) && (j == grid[0].size() - 1)) {
                dp[n] = 1;
                return 1;
            }
            else {
                int downMoves = 0, rightMoves = 0;
                // Right moves
                if ((j+1) < grid[0].size()) {
                    if (grid[i][j+1] == 0) {
                        rightMoves = uniquePaths(grid, i, j+1, dp);
                    }
                }
                // Down moves
                if ((i+1) < grid.size()) {
                    if (grid[i+1][j] == 0) {
                        downMoves = uniquePaths(grid, i+1, j, dp);
                    }
                }
                dp[n] = downMoves + rightMoves;
                return downMoves + rightMoves;
            }
        }
        
    }
    int uniquePaths(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        if (grid[0][0] == 1 || grid[n-1][m-1] == 1) return 0;
        else {
            int dp[n*m];
            for (int i = 0; i < n*m; i++) {
                dp[i] = (grid[i/m][i%m] == 1) ? -2 : -1;
            }
            int res = uniquePaths(grid, 0, 0, dp);
            return res;
        }
    }
};
