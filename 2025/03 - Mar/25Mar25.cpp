class Solution {
public:
    bool evaluate(bool b1, bool b2, char op) {
        if (op == '&') return b1 & b2;
        if (op == '|') return b1 | b2;
        return b1 ^ b2;
    }

    int countWays(string &s) {
        int n = s.size();
        
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, 0)));

        for (int i = 0; i < n; i += 2) {
            dp[i][i][1] = (s[i] == 'T') ? 1 : 0;
            dp[i][i][0] = (s[i] == 'F') ? 1 : 0;
        }

        for (int length = 2; length < n; length += 2) {
            for (int i = 0; i < n - length; i += 2) {
                int j = i + length;
                dp[i][j][0] = dp[i][j][1] = 0;

                for (int k = i + 1; k < j; k += 2) {
                    char op = s[k];

                    int leftTrue = dp[i][k - 1][1];
                    int leftFalse = dp[i][k - 1][0];
                    int rightTrue = dp[k + 1][j][1];
                    int rightFalse = dp[k + 1][j][0];

                    if (evaluate(true, true, op)) dp[i][j][1] += leftTrue * rightTrue;
                    if (evaluate(true, false, op)) dp[i][j][1] += leftTrue * rightFalse;
                    if (evaluate(false, true, op)) dp[i][j][1] += leftFalse * rightTrue;
                    if (evaluate(false, false, op)) dp[i][j][1] += leftFalse * rightFalse;

                    if (!evaluate(true, true, op)) dp[i][j][0] += leftTrue * rightTrue;
                    if (!evaluate(true, false, op)) dp[i][j][0] += leftTrue * rightFalse;
                    if (!evaluate(false, true, op)) dp[i][j][0] += leftFalse * rightTrue;
                    if (!evaluate(false, false, op)) dp[i][j][0] += leftFalse * rightFalse;
                }
            }
        }

        return dp[0][n - 1][1];  
    }
};
