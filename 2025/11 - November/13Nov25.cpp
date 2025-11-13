class Solution {
  public:
    virtual int lcsUtil(int i, int j, string &a, string &b, vector<vector<int>> &dp){
      if(i<0 || j<0)
        return 0;
      if(dp[i][j] != -1)
        return dp[i][j];
        
      if(a[i] == b[j])
        return dp[i][j] = 1 + lcsUtil(i-1, j-1, a, b, dp);
      
      return dp[i][j] = max(lcsUtil(i-1, j, a, b, dp), lcsUtil(i, j-1, a, b, dp));
          
    }
  
    virtual int lcs(string &a, string &b){
      int n1=a.size(), n2=b.size();
      vector<vector<int>> dp(n1+1, vector<int>(n2+1, -1));
      
      return lcsUtil(n1-1, n2-1, a, b, dp);
          
    }
  
    virtual bool isInterleave(string &s1, string &s2, string &s3) {
      int n1=s1.size(), n2=s2.size(), n3=s3.size();
      
      if((n1+n2) != n3)
        return false;
      
      unordered_map<char, int> freq;
      for(char ch: s1)
        freq[ch]++;
        
      for(char ch: s2)
        freq[ch]++;
        
      for(char ch: s3){
        if(freq.find(ch) == freq.end())
          return false;
          
        freq[ch]--;
        if(freq[ch]==0)
          freq.erase(ch);
      }
          
      if(!freq.empty())
        return false;
     
      int lcs1 = lcs(s1, s3);
      int lcs2 = lcs(s2, s3);
      
      return ((lcs1==n1) && (lcs2==n2)); 
    }
};
