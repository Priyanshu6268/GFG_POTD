class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int mini=INT_MAX;
        int ans;
        for(int i =0;i<n;i++){
            int ones=0;
            for(int j=0;j<m;j++){
                ones+=a[i][j];
            }
            if(ones<mini) {
                ans=i;
                mini=ones;
            }
            
        }
        return ans+1;
    }
};
