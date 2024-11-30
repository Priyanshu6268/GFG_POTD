class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        vector<int> v(26);
        for(auto i : s1) v[i - 'a']++;
        for(auto i : s2) v[i - 'a']--;
        
        for(auto i : v) if(i != 0) return false;
        return true;
    }
};
