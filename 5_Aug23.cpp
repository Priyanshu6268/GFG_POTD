class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long ans=INT_MAX;
    
    sort(a.begin(),a.end());
    for(long long i=0;i<=n-m;i++){
       long long a1=a[i];
       long long b=a[i+m-1];
       ans=min(ans,abs(b-a1));
        }
    return ans;
    
    
    }   
};
