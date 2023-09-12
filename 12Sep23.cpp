class Solution {
  public:
int isPerfectNumber(long long N) {
        // code here
        if(N==1)return 0;
        long long sum=1;
        for(long long i=2;i<=sqrt(N);i++){
            if(N%i==0){
                sum+=i;
                sum+=(N/i);
            }
        }
        return sum==N;
    }
};
