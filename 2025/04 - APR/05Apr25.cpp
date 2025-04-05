class Solution {
  public:
    void solve(vector<vector<char>>&grid,int i,int j,int& n,int& m){
        if(i<0 ||j <0 || i>=n ||j >=m || grid[i][j] =='W')return;
        grid[i][j] = 'W';
        solve(grid,i+1,j,n,m);
        solve(grid,i-1,j,n,m);
        solve(grid,i,j+1,n,m);
        solve(grid,i,j-1,n,m);
        solve(grid,i+1,j+1,n,m);
        solve(grid,i+1,j-1,n,m);
        solve(grid,i-1,j-1,n,m);
        solve(grid,i-1,j+1,n,m);
    }
    int countIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        int count = 0;
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 'L'){
                    count++;
                    solve(grid,i,j,n,m);
                }
            }
        }
        return count;
        
    }
};
