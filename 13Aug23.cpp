// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        
        long long int mod=1000000007;
        
        long long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        
        for(long long int i=2; i<=n; i++){
            
            dp[i]=(dp[i-1]%mod)+(dp[i-2]%mod);
        }
        
        return dp[n]%mod;
    }
};
