class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<bool>vis(V,false);
        queue<int>que;
        que.push(0);
        
        while (!que.empty()){
            int curr = que.front();
            que.pop();
            
            if (!vis[curr]){
                vis[curr] = true;
                ans.push_back(curr);
                for (int val : adj[curr]){
                    que.push(val);
                }
            }
        }
        return ans;
    }
};
