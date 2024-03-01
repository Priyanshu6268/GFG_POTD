class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        unordered_map<int,int>mp;
        int ans=-1;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]]>=k){
                ans=a[i];
                break;
            }
        }
        return ans;
        
    }
};
