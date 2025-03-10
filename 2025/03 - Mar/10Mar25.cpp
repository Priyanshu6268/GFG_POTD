class Solution {
private:  
    int func(int i,int j,string s1,string s2,vector<vector<int>>& dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return func(i-1,j-1,s1,s2,dp);
        return dp[i][j] = 1 + min({func(i,j-1,s1,s2,dp),func(i-1,j,s1,s2,dp),func(i-1,j-1,s1,s2,dp)});
    }
public:
    int editDistance(string& s1, string& s2) {
        int n = s1.length();
        int m = s2.length();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return func(n-1,m-1,s1,s2,dp);
    }
};
