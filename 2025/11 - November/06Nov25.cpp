class Solution {
  public:
    int topdown(int n, vector<int> &dp){
        if(n<0){
            return 0;
        }
        if(n == 0){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int one = topdown(n-1, dp);
        int two = topdown(n-2, dp);
        return dp[n] = one+two;
    }
    int bottomup(int n){
        vector<int> dp(n+1, 0);
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i = 3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int spaceopt(int n){
        if(n == 1 or n == 2)return n;
        int a = 1;
        int b = 2;
        
        for(int i = 3;i<=n;i++){
            int store = b;
            b = a+b;
            a = store;
        }
        return b;
    }
    int numberOfWays(int n) {
        return spaceopt(n);
    }
};
