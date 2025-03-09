class Solution {
  public:
    int countPS(string &s) {
        int ans = 0;
        for (int i = 0, n = s.size(); i < n; i++) {
            for (int x : {0, 1}) {
                int l = i, r = i + x;
                while (0 <= l and r < n and s[l] == s[r])
                    ans++, l--, r++;
            }
        }
        return ans - s.size();
    }
};
