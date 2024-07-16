class Solution {
  public:
    string printString(string s, char ch, int count) {
        // Your code goes here
        int cnt = 0;
        int n = s.length();
        for(int i = 0; i<n; i++){
            if(s[i] == ch) cnt++;
            if(cnt == count) return s.substr(i+1, n-1);
        }
        return "";
    }
};
