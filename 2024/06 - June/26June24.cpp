class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int m = matrix.size();  
        int n = matrix[0].size();          
        int result = 0;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    if (i - 1 >= 0 && matrix[i-1][j] == 1) result++;
                    if (j - 1 >= 0 && matrix[i][j-1] == 1) result++;
                    if (i + 1 < m && matrix[i+1][j] == 1) result++;  
                    if (j + 1 < n && matrix[i][j+1] == 1) result++;  
                }
            }
        }
        return result;
    }
};
