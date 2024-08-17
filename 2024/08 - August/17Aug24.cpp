class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        long long int n=nums.size();
        vector<long long int>suffix(n);
        long long int prod=1;
        prod=1;
        for(int i=n-1;i>=0;i--){
            suffix[i]=prod;
            prod=prod*nums[i];
        }
        prod=1;
        vector<long long int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=(prod*suffix[i]);
            prod=prod*nums[i];
            
        }
        return ans;
    }
};
