class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        vector<int> vec;
        for(const auto& i :mat)
        {
            for(const auto & j : i)
            {
                vec.push_back(j);
            }
        }
        sort(vec.begin(), vec.end());
        
        int median = vec.size() / 2;
            return vec[median];
    }
};
