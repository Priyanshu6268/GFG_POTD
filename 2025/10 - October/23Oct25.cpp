class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // code here
        vector<vector<int>>v1;
   
        priority_queue<pair<int,vector<int>>>pq;
        
        for(int i=0; i<points.size() ;i++) {
            int x1 = points[i][0];
            int x2 = points[i][1];
            
            int temp = (x1*x1) + (x2*x2);
            
            pq.push({temp,points[i]});
            
            if(pq.size()>k) pq.pop();
            
        }
        
        while(!pq.empty()) {
            v1.push_back(pq.top().second);
            pq.pop();
        }
        
        return v1;
    }
};
