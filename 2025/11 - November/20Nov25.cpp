class Solution {
  public:
    const int INF = 1e9;
    int minCost(string &s, string &t, vector<vector<char>> &transform,
                vector<int> &cost) {
        vector<vector<int>> dist(26, vector<int>(26, INF));
        for(int i = 0; i < 26; ++i) dist[i][i] = 0;
        for(int i = 0; i < transform.size(); ++i) {
            int c = cost[i];
            int u = transform[i][0] - 'a';
            int v = transform[i][1] - 'a';
            dist[u][v] = min(dist[u][v], c);
        }
        for(int k = 0; k < 26; ++k) {
            for(int i = 0; i < 26; ++i) {
                if (dist[i][k] == INF) continue;
                for(int j = 0; j < 26; ++j) {
                    if(dist[k][j] == INF) continue;
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        long long minCost = 0;
        for(int i = 0; i < s.length(); ++i) {
            int u = s[i] - 'a', v = t[i] - 'a';
            if(u == v) continue;
            int mini = INF;
            for(int k = 0; k < 26; ++k) {
                if(dist[u][k] != INF && dist[v][k] != INF)
                    mini = min(mini, dist[u][k] + dist[v][k]);
            }
            if(mini == INF) return -1;
            minCost += mini;
        }
        return minCost;
    }
};
