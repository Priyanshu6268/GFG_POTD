class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>> v(V);
        for (auto e : edges){
            v[e.first].push_back(e.second);
            v[e.second].push_back(e.first);
        }
        return v;
    }
};
