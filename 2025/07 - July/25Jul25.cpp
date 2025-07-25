class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
       int total = 0;
       int mnsum = 0;
       int mxsum = 0;
       int mn = INT_MAX;
       int mx = INT_MIN;
       
       for(int i = 0;i<arr.size();i++){
           total += arr[i];
           
           mnsum += arr[i];
           mn = min(mn,mnsum);
           if(mnsum>=0) mnsum = 0;
           
           mxsum += arr[i];
           mx = max(mx,mxsum);
           if(mxsum<0) mxsum = 0;
       }
       
       if(total-mn==0) return mx;
       else return max(total - mn,mx);
    }
};
