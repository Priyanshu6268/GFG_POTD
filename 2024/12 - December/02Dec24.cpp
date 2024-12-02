class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        int k = pat.size();
        int n = txt.size();
        vector<int> ans;
        for(int i=0; i<=n-k; i++){
            if(txt[i]!=pat[0])
                continue;
            string st = txt.substr(i, k);
            if(st==pat)
                ans.push_back(i);
        }
        return ans;
    }
};
