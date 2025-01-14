class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        long t_sum=0;
        for(auto &x:arr) t_sum+=x;
        long t=0;
        for(int i=1;i<arr.size();i++) {
            t+=arr[i-1];
            if((t)==(t_sum-t-arr[i])) return i;
        }
        return -1;
    }
};
