class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        vector<int>row(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            row[i]=sum;
        }
        vector<int>col(n,0);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[j][i];
            }
            col[i]=sum;
        }
        for(int i=0;i<n;i++){
            if(row[i]==1 && col[i]==n ){
                return i;
            }
        }
        return -1;
    }
};
