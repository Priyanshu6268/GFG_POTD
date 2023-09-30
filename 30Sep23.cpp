class Solution {
public:
    void booleanMatrix(vector<vector<int> > &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<bool> r(n, 0), c(m, 0);

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (matrix[i][j]) {
                    r[i] = true;
                    c[j] = true;
                }

        for (int i = 0; i < n; ++i)
            if (r[i])
                for (int j = 0; j < m; ++j)
                    matrix[i][j] = 1;

        for (int j = 0; j < m; ++j)
            if (c[j])
                for (int i = 0; i < n; ++i)
                    matrix[i][j] = 1;
    }
};
