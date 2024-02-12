//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long ans=0;
        long long mod=1000000007;
         long long temp=1;
        for(int i=1;i<=n;i++){
          
           long long t1=i;
           long long c=1;
           while(t1--){
               c=(c*temp)%mod;
               temp++;
           }
           ans=(ans+c)%mod;
        }
        return ans;
    }
};
