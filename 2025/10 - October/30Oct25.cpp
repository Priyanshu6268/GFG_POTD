class Solution {
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int row, int col) {
        int n = grid.size();
        int m = grid[0].size();

        vis[row][col] = 1;

        int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

        for (int i = 0; i < 4; i++) {
            int nr = row + dir[i][0];
            int nc = col + dir[i][1];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                grid[nr][nc] == 'O' && vis[nr][nc] == 0) {
                dfs(grid, vis, nr, nc);
            }
        }
    }

public:
    void fill(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        // Traverse first and last row
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 'O' && vis[0][j] == 0) {
                dfs(grid, vis, 0, j);
            }
            if (grid[n - 1][j] == 'O' && vis[n - 1][j] == 0) {
                dfs(grid, vis, n - 1, j);
            }
        }

        // Traverse first and last column
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 'O' && vis[i][0] == 0) {
                dfs(grid, vis, i, 0);
            }
            if (grid[i][m - 1] == 'O' && vis[i][m - 1] == 0) {
                dfs(grid, vis, i, m - 1);
            }
        }

        // Flip unvisited 'O's to 'X'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 'O' && vis[i][j] == 0) {
                    grid[i][j] = 'X';
                }
            }
        }
    }
};
