class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        sort(arr.begin(),arr.end());
        vector<int>ans(k,-1);
        int start=arr.size()-k;
        int index=ans.size()-1;
        for(int i=start;i<arr.size();i++){
            ans[index--]=arr[i];
        }
        return ans;
    }
};
