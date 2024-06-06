class Solution {
public:
    long long max_sum(int a[], int n) {
        // Your code here
        long long sum =0 ;
        long long res=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            res+=(1ll*i*a[i]);
        } 
        long long ans = res;
        for(int i=0;i<n-1;i++){
            long long  temp = sum - a[i];
            res= res-temp+(1ll*(n-1)*a[i]);
            ans=max(ans,res);
        }
        return ans;
    }
};
