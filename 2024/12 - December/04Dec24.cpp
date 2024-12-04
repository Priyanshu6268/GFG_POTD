class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        string t=s1+s1;
        int n=s1.length();
        if(n!=s2.length()) return 0;
        return (t.find(s2) != string::npos);
    }
};
