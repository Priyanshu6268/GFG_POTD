class Solution {
   public:
    string smallestWindow(string &s, string &p) {
        vector<int> mp(26), curr(26);
        int start = 0, len = INT_MAX, cnt = 0, n = s.size(), m = p.size();
        for (char ch : p)
            mp[ch - 'a']++;
        for (int i = 0, j = 0, cnt = 0; j < n; j++) {
            cnt += curr[s[j] - 'a'] < mp[s[j] - 'a'];
            curr[s[j] - 'a']++;
            while (i <= j and cnt == m) {
                if (j - i + 1 < len)
                    len = j - i + 1, start = i;
                cnt -= curr[s[i] - 'a'] == mp[s[i] - 'a'];
                curr[s[i] - 'a']--;
                i++;
            }
        }
        return len == INT_MAX ? "-1" : s.substr(start, len);
    }
};
