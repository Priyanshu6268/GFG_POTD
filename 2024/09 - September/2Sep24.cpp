class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({grid[0][0],0});
        
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0] = grid[0][0];
        
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        while(!pq.empty()){
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            int r = node/m;
            int c = node%m;
            for(int i=0;i<4;i++){
                int nr = r+dx[i];
                int nc = c+dy[i];
                
                if(nr>=0 && nr<n && nc>=0 && nc<m){
                    if(d+grid[nr][nc] < dist[nr][nc]){
                        dist[nr][nc] = d+grid[nr][nc];
                        pq.push({dist[nr][nc],(nr*m+nc)});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};
