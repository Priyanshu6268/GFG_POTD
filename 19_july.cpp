//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string A) {
        int n = A.size();
        // creating a reverse string
        string B = A;
        reverse(B.begin(),B.end());
        // creating the DP array with all zeros
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        // traversing the string and the reverse string
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                // if the element is equal then we add 1 to the answer
                if(A[i-1]==B[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        // returning the maximum length of the palindrome subsequence
        return dp[n][n];
    }
};
