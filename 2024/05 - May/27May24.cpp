class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
   
    vector<vector<int>> dp(n, vector<int>(n + 1, -1)); 


    function<int(int, int)> rec = [&](int i, int p) -> int {
        if (i == n) return 0;
        if (p != -1 && dp[i][p] != -1) return dp[i][p];

        int tk = 0, nt = rec(i + 1, p);
        if (p == -1 || abs(a[i] - a[p]) == 1) tk = 1 + rec(i + 1, i);

        if (p == -1) return max(tk, nt);
        return dp[i][p] = max(tk, nt);  
    };

    return rec(0, -1);
}
};
