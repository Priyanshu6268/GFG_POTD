class Solution {
  public:
    vector<string> findPermutation(string &s) {
        sort(s.begin(),s.end());
        vector<string> res;
        do{
            res.push_back(s);
        } while(next_permutation(s.begin(),s.end()));
        return res;
    }
};
