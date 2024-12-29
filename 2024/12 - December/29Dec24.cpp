class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& bb) {
        // code here
        unordered_set<int>s1,s2; vector<int>ans;
        for(auto &b: a){s1.insert(b);}
        for(auto &b: bb){
            if(s1.find(b)!=s1.end() and s2.find(b)==s2.end()){
                ans.push_back(b); s2.insert(b);
            }
        }
        return ans;
    }
};
