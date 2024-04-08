#define ll long long
//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    ll dp[1002][1002];
    ll solve(int i, int j, int arr[]){
        if(i>j){
            return 0;
        }
        // first;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        ll ans1=arr[i]+min(solve(i+1,j-1,arr),solve(i+2,j,arr));
        ll ans2=arr[j]+min(solve(i,j-2,arr),solve(i+1,j-1,arr));
        return dp[i][j]=max(ans1,ans2);
    }
    long long maximumAmount(int n, int arr[]){
        memset(dp,-1,sizeof(dp));
        ll ans=solve(0,n-1,arr);
        return ans;
    }
};
