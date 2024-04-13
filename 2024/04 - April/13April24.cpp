class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        long long int ans=0;int p=31;
        while(x>0){
            //cout<<"x "<<x<<endl;
            int y=(x) & 1;
            //cout<<"y "<<y<<endl;
            if(y==1){
                ans=ans+pow(2,p)*1l;
            }
            x=x>>1;
            p--;
        }
        return ans;
    }
};
