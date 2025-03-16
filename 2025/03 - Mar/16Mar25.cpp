class Solution {
public:
    vector<int> dp;
    
    int fn(vector<int>& a, int i) {
        if (i >= a.size() - 1) return 0;
        if (a[i] == 0) return 1e5;
        if (dp[i] != -1) return dp[i];

        int ans = 1e5;
        for (int j = 1; j <= a[i]; j++) {
            ans = min(ans, fn(a, i + j) + 1);
        }
        return dp[i] = ans;
    }

    int minJumps(vector<int>& arr) {
        dp.assign(arr.size(), -1);
        int ans = fn(arr, 0);
        return ans == 1e5 ? -1 : ans;
    }
};

