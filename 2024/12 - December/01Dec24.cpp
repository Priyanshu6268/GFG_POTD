//    https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        int arr[256]={0};
        for(char c:s) {
             arr[c]++;
        }
        char ans;
        for(char c:s) {
            if(arr[c]==1) {
                return c;
            }
        }
        return '$';
    }
};
