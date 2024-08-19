class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
       for(int i=0;i<arr.size();i++){
           return arr[k-1];
       }
       return {};
    }
};
