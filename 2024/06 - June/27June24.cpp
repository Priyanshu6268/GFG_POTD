bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int res,res1,N=mat.size(),M=mat[0].size();
        for (int i=0;i<N-1;i++)
        {
            for(int j=0;j<M-1;j++)
            {
               if (mat[i][j]!=mat[i+1][j+1])  
               {
                return 0;
               }
            }
        }
        return 1;   

}
