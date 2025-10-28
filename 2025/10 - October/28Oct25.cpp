class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int r=grid.size();
        int c=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    q.push({i,j});
                }
                else{
                    grid[i][j]=1e9;
                }
            }
        }
        int row[4] = {1,-1,0,0};
        int col[4] = {0,0,-1,1};
        auto valid=[&] (int i,int j)->bool{
            return i>=0 && j>=0 && i<r && j<c;
        };
        while(!q.empty()){
            auto [i,j]=q.front();q.pop();
            for(int k=0;k<4;k++){
                int dx=i+row[k];
                int dy=j+col[k];
                if(valid(dx,dy) && grid[dx][dy]==1e9){
                    grid[dx][dy]=(grid[i][j]+1);
                    q.push({dx,dy});
                }
            }
        }
        
        return grid;
    }
};
