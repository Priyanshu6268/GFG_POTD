class Solution {
  public:
    bool contain(long long i) {
        while (i) 
        {
            if (i % 10 == 9) return true;
            i /= 10;
        }
        return false;
    }
    long long ExtractNumber(string sentence) {

        // code here
        stringstream s(sentence);
        long long ans = -1;
        string a;
        while (s >> a) 
        {
            if (a[0] - '0' >= 0 && a[0] - '0' < 10) 
            {
                long long num = stoll(a);
                if (!contain(num) && num > ans) {
                    ans = num;
                }
            }
        }
        return ans;
    }
};
