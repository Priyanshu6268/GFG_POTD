class Solution {
  public:
    int lps(string str) {
     int n = str.size();
        string rev = str;
        reverse(rev.begin(), rev.end());
    
         for (int len = n - 1; len > 0; len--) {
        
        if (memcmp(str.c_str(), str.c_str() + n - len, len) == 0) {
            return len;
        }
    }
    return 0; 
}
};
