class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> freq(101,0);
        vector<int> ans;
        for (auto & it: arr){
            if (freq[it]==0){
                freq[it]++;
                ans.push_back(it);
            }
        }
        return ans;
    }
};
