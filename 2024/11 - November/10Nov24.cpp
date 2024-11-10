class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> res;
        set<int> mp;
        for(int i=0;i<a.size();i++)
        {
            mp.insert(a[i]);
        }
        
        for(int i=0;i<b.size();i++)
        {
            mp.insert(b[i]);
        }
        for(auto it=mp.begin(); it != mp.end(); ++it)
        {
            res.push_back(*it);
        }
        return res;
    }
};
