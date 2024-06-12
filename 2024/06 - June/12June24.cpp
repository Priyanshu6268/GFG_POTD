class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt=0;
        for (int i = 1; i <= n; ++i) 
        {
            int num = i;
            while (num > 0) {
                if (num % 10 == 4) { // Check if the last digit is 4
                    cnt++;
                    break; // No need to check remaining digits if one digit is 4
                }
                num /= 10; // Remove the last digit
            }
        }
        return cnt;
    }
};
