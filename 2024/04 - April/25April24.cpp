class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
        int sum=-1;
        
        for(int i=1; i<n-1; i++){
            for(int j=1; j<m-1; j++){
                int top=mat[i-1][j-1]+mat[i-1][j]+mat[i-1][j+1];
                int mid=mat[i][j];
                int bottom=mat[i+1][j-1]+mat[i+1][j]+mat[i+1][j+1];
                int cursum=top+mid+bottom;
                
                sum=max(sum, cursum);
                
            }
        }
        
        return sum;
    }
};
