class Solution{
public:
    vector<vector<int>> ans;
    void solve(int col, vector<vector<int>> &board, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n) {
        if(col == n) {
            vector<int> temp;
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(board[j][i])
                        temp.push_back(j + 1);
                }
            }
            ans.push_back(temp);
            return;
        }
        
        for(int row = 0; row < n; row++) {
            if(leftRow[row] == 0 && upperDiagonal[n-1 + col - row] == 0 && lowerDiagonal[row + col] == 0) {
                board[row][col] = row + 1;
                leftRow[row] = 1;
                upperDiagonal[n-1 + col - row] = 1;
                lowerDiagonal[row + col] = 1;
                solve(col + 1, board, leftRow, upperDiagonal, lowerDiagonal, n);
                board[row][col] = 0;
                leftRow[row] = 0;
                upperDiagonal[n-1 + col - row] = 0;
                lowerDiagonal[row + col] = 0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> board(n,vector<int>(n,0));

        vector<int> leftRow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
        solve(0, board, leftRow, upperDiagonal, lowerDiagonal, n);
        return ans;
    }
};
