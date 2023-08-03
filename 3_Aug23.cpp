class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>>adj[N];
        for(auto it:edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int>dis(N,INT_MAX);
        dis[0]=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,0});
        while(!pq.empty())
        {
            int distance=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node])
            {
                if(distance+it.second<dis[it.first])
                {
                    dis[it.first]=distance+it.second;
                    pq.push({dis[it.first],it.first});
                }
            }
        }
        for(int i=0;i<N;i++)
        {
            if(dis[i]==INT_MAX)
            dis[i]=-1;
        }
        return dis;
        
    }
};
