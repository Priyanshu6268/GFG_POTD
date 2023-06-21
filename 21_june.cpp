class Solution {
  public:
        // int MOD = 1000000007;
    int sumOfNaturals(int n) {
        // code here
        // long long sum = (((long long)n*long long((n+1))/2))%MOD;
        long long sum = (((long long)n*(n+1))/2)%1000000007; 
        return (int)sum;
    }
};
