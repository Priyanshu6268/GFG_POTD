class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        int ans = 0;
        int mp[26] = {};
        for(auto i : s){
            ans = ++ans +  mp[i-'a']++;
        }
        return ans;
    }
};
