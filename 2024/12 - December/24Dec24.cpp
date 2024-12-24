class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int l=0,r=m*n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            int x1 = mid/m;
            int y = mid%m;
            if(mat[x1][y]==x) return true;
            else if(mat[x1][y]<x) l = mid+1;
            else r = mid-1;
        }
        return false;
    }
};
