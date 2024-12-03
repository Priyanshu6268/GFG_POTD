//    https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1
class Solution {
  public:
    int minChar(string& s) {
    string rev = s; reverse(rev.begin(), rev.end());
    string concat = s + "#" + rev;
    int n = concat.size(), l = 0;
    vector<int> lps(n, 0);
    for (int i = 1; i < n; i++) {
        while (l > 0 && concat[i] != concat[l]) l = lps[l - 1];
        if (concat[i] == concat[l]) l++;
        lps[i] = l;
    }
    return s.size() - lps[n - 1];
    }
};
