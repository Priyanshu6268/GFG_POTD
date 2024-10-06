class Solution {
  public:
  int n;
  int m;
  void solve(int i,int j,vector<vector<char>>&grid)
  {
      if(i>=n || i<0 || j<0 || j>=m ||grid[i][j]=='0')
      {
          return ;
      }
      grid[i][j]='0';
      solve(i-1,j,grid);
      solve(i,j-1,grid);
      solve(i+1,j,grid);
      solve(i,j+1,grid);
      solve(i-1,j+1,grid);
      solve(i+1,j-1,grid);
      solve(i+1,j+1,grid);
      solve(i-1,j-1,grid);
      
      
  }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        n=grid.size();
        m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!='0')
                {
                    ++count;
                    solve(i,j,grid);
                }
            }
        }
        return count;
    }
};

