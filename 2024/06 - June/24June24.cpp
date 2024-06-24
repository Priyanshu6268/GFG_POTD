class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        long long a = n-1 + 2;
        long long b = abs(q-a);
        if(b>=n) return 0;
        long long c = abs(b-n);
        return c;
    }
};
