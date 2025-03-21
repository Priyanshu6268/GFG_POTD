class Solution {
  public:
    
    int dp[100001];
    int solve(vector<int>& arr, int i) {
        
        if(i >= arr.size()){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int taken = arr[i] + solve(arr,i+2);
        int skip = solve(arr,i+1);
        
        return dp[i] =  max(taken,skip);
    }
    int findMaxSum(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
        return solve(arr,0);
    }
};
