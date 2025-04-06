class Solution {
  public:
    vector<vector<int>> adj; 
    vector<int> ans;
    vector<bool> vis;

    void solve(int u){
        vis[u] = 1;
        for(auto&v:adj[u]){
          if(!vis[v]){
              solve(v);
          }
      }
      ans.push_back(u);

    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        adj.resize(V);
        vis.resize(V, 0);

        for(auto&a:edges){
            adj[a[0]].push_back(a[1]);
        }

        for(int i = 0; i < V; i++){
            if(!vis[i]){
                solve(i);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
