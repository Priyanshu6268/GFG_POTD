class Solution {
  public:
    void solve(int n, string s, vector<string>&ans){
        if(s.length()==n){
            ans.push_back(s);
            return;
        }
        solve(n, s+"0", ans);
        solve(n, s+"1", ans);
    }
  
    vector<string> binstr(int n) {
        // code here
        string s="";
        vector<string>ans;
        solve(n, s, ans);
        return ans;
    }
};
