class Solution {
  public:
    int maxEdgesToAdd(int V, vector<vector<int>>& edges) {
        // code here
        int totalPossibleEdges = (V * (V - 1)) / 2;
        return totalPossibleEdges - edges.size();
    }
};
