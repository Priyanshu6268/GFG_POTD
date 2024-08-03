class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        vector<int>ind(n,0);
        vector<int>out(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && i!=j){
                    ind[j]++;
                    out[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(ind[i]==(n-1) && out[i]==0) return i;
        }
        return -1;
    }
};
