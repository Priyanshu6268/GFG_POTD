class Solution {
  public:
    virtual int fun(int l, int r, vector<int> &freq, vector<int> &pref, vector<vector<int>> &dp){
      if(l==r)
        return freq[l];
      
      if(l>r)
        return 0;
        
      if(dp[l][r] != -1)
        return dp[l][r];
        
      int ans = INT_MAX;
      
      int cur = pref[r] - (l==0? 0: pref[l-1]);
      for(int k=l;k<=r;k++){
        int left = fun(l, k-1, freq, pref, dp);      
        int right = fun(k+1, r, freq, pref, dp);
        
        ans = min(ans, cur+left+right);
      }
      
      return dp[l][r] = ans;
          
    }
    
    virtual int minCost(vector<int> &keys, vector<int> &freq){
      int n = keys.size();
      vector<int> pref(n, 0);
      vector<vector<int>> dp(n, vector<int>(n, -1));
      
      pref[0] = freq[0];
      for(int i=1;i<n;i++){
        pref[i] = pref[i-1] + freq[i];      
      }
      
      return fun(0, n-1, freq, pref, dp);
      
    }
};
