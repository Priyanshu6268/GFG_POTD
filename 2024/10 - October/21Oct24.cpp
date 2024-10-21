class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // Complete the function
        int n=arr.size(),xr=0,cnt=0;
        for(auto it:arr)xr^=it;
        for(int i=0;i<n;i++){
            int num=arr[i],ck=xr^num;
            if(num==ck)cnt++;
        }
        return cnt;
    }
};
