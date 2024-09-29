class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int l=arr.size();
        int sum=0;
        for(int i=0;i<l;i++){
            sum+=arr[i]/k;
            if(arr[i]%k!=0)sum++;
        }
        return sum;
    }
};
