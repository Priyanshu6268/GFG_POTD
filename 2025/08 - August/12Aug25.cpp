class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        sort(prices.begin(),prices.end());
        int n = prices.size();
        int i = 0, j = n-1;
        int maxi = 0, mini = 0;
        int cnt1 = n , cnt2 = n;
        vector<int> res;
        while (cnt1>0){
            mini += prices[i];
            cnt1 -= k+1;
            i++;
        }
        while (cnt2>0){
            maxi += prices[j];
            cnt2 -= k+1;
            j--;
        }
        res.push_back(mini);
        res.push_back(maxi);
        return res;
    }
};
