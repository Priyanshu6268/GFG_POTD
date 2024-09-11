class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        for(auto it: arr){
            pq.push(it);
        }
        
        long long ans = 0;
        
        while(pq.size()>1){
            int j = pq.top();
            pq.pop();
            int k = pq.top();
            pq.pop();
            int su = j+k;
            ans += su;
            pq.push(su);
        }
        return ans;
    }
};
