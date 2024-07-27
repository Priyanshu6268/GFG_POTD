class Solution{
  public:
    int countMin(string s1){
        int n=s1.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        string s2=s1;
        reverse(s2.begin(),s2.end());
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i][j-1] ,dp[i-1][j]);
            }
        }
        return n-dp[n][n];
    }
};
