class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void DFSUtil(int i, vector<int> adj[], int V, bool visited[], vector<int> &res){
	    if(visited[i]) return;
	    visited[i] = true;
	    res.push_back (i);
	    for (int j : adj[i]){
	        if (!visited[j])
	            DFSUtil(j, adj, V, visited, res);
	    }
	}
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V];
	    memset(visited, false, sizeof(visited));
	
	    vector <int> res;
	    for (int i = 0; i < V; i++)
	        if (!visited[i]){
	            DFSUtil (i, adj, V, visited, res);
	        }
	    return res;
    }
};
