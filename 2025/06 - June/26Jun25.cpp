class Solution {
  public:
    int minValue(string &s, int k) 
    {
        unordered_map<char,int>mp;
        for(auto it:s)mp[it]++;
        
        priority_queue<int>pq;
        for(auto it:mp) pq.push(it.second);
        
        while(k--)
        {   int top=pq.top();
                    pq.pop();
            top--;
            pq.push(top);
        }
        
        int ans=0;
        while(!pq.empty())
        {   ans+=(pq.top()*pq.top());
            pq.pop();
        }
        return ans;
    }
};

