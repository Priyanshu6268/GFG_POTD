class Solution {
	public:
		int LongestRepeatingSubsequence(int x, int y, string s1, string s2){
		    int i,j,dp[x+1][y+1];
		    memset(dp,0,sizeof(dp));
		    
		    for(i=0;i<=x;++i){
		        for(j=0;j<=y;++j){
		            if(i == 0 || j == 0)
		            dp[i][j]=0;
		            
		          else if(s1[i-1]==s2[j-1] && i!=j)
		          dp[i][j]=1+dp[i-1][j-1];
		          
		          else 
		              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		        }
		    }
		    
		    return dp[x][y];
		}
		 int LongestRepeatingSubsequence(string str){
		     
		     int n=str.length();
		     return LongestRepeatingSubsequence(n,n,str,str);
		 }

};
