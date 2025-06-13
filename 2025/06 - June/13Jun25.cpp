class Solution {
  public:
    bool isPossible(int curr, vector<int>& piles, int h, int n){
        int cnt=0;
        for(int i=0; i<n; i++){
            cnt += (piles[i] + curr - 1) / curr;
        }
        return cnt<=h;
    }
  
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int lo=1;
        int hi=arr[n-1];
        int ans;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(isPossible(mid, arr, k, n)){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
