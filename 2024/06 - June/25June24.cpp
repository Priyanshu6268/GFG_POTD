class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        // Reduce k to the minimum number of effective rotations
        k = k % m;
        
        vector<vector<int>> rotatedMat(n, vector<int>(m));
        
        // Rotate each row by k positions to the left
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int new_index = (j + m - k) % m;
                rotatedMat[i][new_index] = mat[i][j];
            }
        }
        
        return rotatedMat;
    }
};
