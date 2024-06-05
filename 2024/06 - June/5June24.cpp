class Solution {
  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int sum1=0,sum2=0,diff=0;
        sort(a,a+n);
        for(int i=0;i<n;i++) sum1+=a[i];
        for(int i=0;i<m;i++) sum2+=b[i];
        diff=sum1-sum2;
        if((sum1+sum2)&1 or abs(diff)&1)
            return -1;
        for(int i=0;i<m;i++){
            if(binary_search(a,a+n,diff/2+b[i]))
                return 1;
        }
        
        return -1;
    }
};
