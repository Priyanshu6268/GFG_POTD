class Solution{
    public:
    
    long long power(int N,int R)
    {
        long long res=1;
       while(R){
           if(R&1){
               res=(1LL*(N%mod)*(res%mod))%mod;
           }
           N=(1LL*(N%mod)*(N%mod))%mod;
           R>>=1;
       }
        return res;
        
    }
};
