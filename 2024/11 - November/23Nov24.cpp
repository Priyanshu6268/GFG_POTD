class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int mini=arr[0];
        int maxi=arr[n-1];
        
        int ans=maxi-mini;
        
        for(int i=1;i<n;i++){
            mini=min(arr[0]+k , arr[i]-k);
            maxi=max(arr[i-1]+k ,arr[n-1]-k);
            
            ans=min(ans,maxi - mini);
        }
        
        return ans;
    }
};
