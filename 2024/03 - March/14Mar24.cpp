class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        // code here
        int by_rows[n][n];
        int by_cols[n][n];
        for(int i=0;i<n;i++){
            int row=0;
            for(int j=0;j<n;j++){
                if(a[i][j]=='X'){
                    row++;
                }
                else{
                    row=0;
                }
                by_rows[i][j]=row;
            }
        }
        for(int i=0;i<n;i++){
            int cols=0;
            for(int j=0;j<n;j++){
                if(a[j][i]=='X'){
                    cols++;
                }
                else{
                    cols=0;
                }
                by_cols[j][i]=cols;
            }
        }
        int result=0;
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int side=min(by_rows[i][j],by_cols[i][j]);
                while(side>result){
                    if(by_rows[i-side+1][j]>=side && by_cols[i][j-side+1]>=side){
                        result=side;
                    }
                    else{
                        side--;
                    }
                }
            }
        }
        return result;
    }
};
