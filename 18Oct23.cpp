class Solution {
  public:
    bool dfs(int i, vector<int> adj[], vector<bool>& vis, vector<bool>& safe) {
        if (safe[i])
            return true;
        if (vis[i])
            return false;
        vis[i] = true;

        bool isSafe = true;
        for (auto edge : adj[i]) {
            isSafe &= dfs(edge, adj, vis, safe);
        }

        return safe[i] = isSafe;
    }

    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<bool> safe(V, false), vis(V, false);
        for (int i = 0; i < V; ++i) {
            if (!vis[i])
                dfs(i, adj, vis, safe);
        }

        vector<int> out;
        for (int i = 0; i < V; ++i)
            if (safe[i])
                out.push_back(i);

        return out;
    }
};
