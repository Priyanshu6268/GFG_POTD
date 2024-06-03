class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        vector<int> dp(n+1, 0);
        
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = 1;
        
        if (n < 3) {
            return dp[n];
        }
        
        int a=0;
        int b=1;
        
        for (int i = 3; i <= n; i++) {
            
            int c=(a+b)%1000000007;
            
            dp[i] =(dp[i - 1] * 2)%1000000007+(c)%1000000007;
            
         
            dp[i]=dp[i]%1000000007;
               
            a=b;
            b=c;
        }
        return dp[n];
    }
};
