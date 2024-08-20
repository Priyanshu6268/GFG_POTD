class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<vector<int>>adj(N);
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        queue<int>q;
        q.push(src);
        vector<int>dist(N, INT_MAX);
        dist[src] = 0;
        while(q.size()){
            auto ele = q.front();
            q.pop();
            for(auto it: adj[ele]){
                if(dist[ele] + 1 < dist[it]){
                    dist[it] = dist[ele]+1;
                    q.push(it);
                }
            }
        }
        for(int i = 0;i<dist.size();i++){
            if(dist[i] == INT_MAX) dist[i] = -1;
        }
        return dist;
    }
};
