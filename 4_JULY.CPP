class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long i=0,j,countProduct,count=0;
        for(int i=0;i<n;i++){
            if(a[i]<k){
                count++;
            }
        }
        while(i<n){
            countProduct=a[i];
            for(int j=i+1;j<n;j++){
                countProduct*=a[j];
                if(countProduct < k){
                    count++;
                }
                else break;
            }
            i++;
        }
        return count;
    }
};
