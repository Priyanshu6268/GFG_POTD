
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int n=s.length();
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto it:mpp){
            pq.push(it.second);
        }
        while(k--){
            int num=pq.top();
            pq.pop();
            if(num--){
                pq.push(num);
            }
        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top()*pq.top();
            pq.pop();
        }
        return ans;
    }
};
