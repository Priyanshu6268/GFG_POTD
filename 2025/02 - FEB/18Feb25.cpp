class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    priority_queue<pair<long long, pair<int, int>>> pq;

    for(auto& V: points) {
        int x = V[0], y = V[1];
        long long distance = (long long)x * x + (long long)y * y;

        pq.push({distance, {x, y}});
        if (pq.size() > k) pq.pop();  
    }

    vector<vector<int>> ans;
    while (!pq.empty()) {
        ans.push_back({pq.top().second.first, pq.top().second.second});
        pq.pop();
    }

    return ans;
    }
};
