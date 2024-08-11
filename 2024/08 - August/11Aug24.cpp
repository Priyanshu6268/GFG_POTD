class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        priority_queue<pair<int,int>>q;
        vector<int>v(n+1);
        for(int i=0;i<n+1;i++) v[i]=i;
        for(int i=0;i<n;i++) q.push({arr[i].profit,arr[i].dead});
        int Count=0,Profit=0;
        while(!q.empty()){
            auto x=q.top();
            int prof=x.first;
            int t=x.second;
            q.pop();
            int time=v[t];
            while(time!=v[time]) time=v[time];
            if(v[time])Count++,Profit+=prof,v[time]--;
        }
        return {Count,Profit};
    } 
};
