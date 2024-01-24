class Solution {
public:
    void dfs(int s, vector<int> graph[], vector<int> &vis)
    {
        vis[s] = 1;
        for (auto i : graph[s])
            if (!vis[i])
                dfs(i, graph, vis);
    }

    int isTree(int n, int m, vector<vector<int>> &adj)
    {
        if ((n - m) != 1)
            return 0;

        vector<int> vis(n, 0), graph[n];

        for (auto i : adj)
        {
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }

        dfs(0, graph, vis);

        for (auto i : vis)
            if (!i)
                return 0;

        return 1;
    }
};
