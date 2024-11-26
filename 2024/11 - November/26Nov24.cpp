class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
           int ans=INT_MIN, n=arr.size(), sum=0
           ,mini=INT_MAX, total=0;
           for(int i=0;i<n;i++){//max subarray sum
               if(sum<0) sum=0;
               sum+=arr[i];
               ans=max(ans,sum);
           }
        for(int i=0;i<n;i++){ //total sum
            total+=arr[i];
        }
        for(int i=0;i<n;i++){ //minimum subarray sum
         sum+=arr[i];
         mini=min(sum, mini);
         if(sum>0) sum=0;
     }
        int sub=total-mini;
      return max(sub,ans);
    }
};
