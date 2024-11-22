class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int curr_small=prices[0];
        int ans=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(curr_small>prices[i])
            {
                curr_small=prices[i];
            }
            if(curr_small<prices[i])
            {
                ans =max(prices[i]-curr_small,ans);
            }
            
        }
        return ans;
    }
};
