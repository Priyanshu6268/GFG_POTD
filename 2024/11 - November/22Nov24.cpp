class Solution {
  public:
    int maximumProfit(vector<int> &price) {
        // code here
        int profit = 0;
        for (int i = 1; i < price.size(); i++) {
            if (price[i] > price[i - 1])
                profit += price[i] - price[i - 1];
        }
        return profit;
    }
};
