class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        for(int i = 0;i<b.size();i++){
            a.push_back(b[i]);
        }
        unordered_set<int> st;
        for(int i=0;i<n+m;i++){
            st.insert(a[i]);
        }
        return st.size();
    }
};
