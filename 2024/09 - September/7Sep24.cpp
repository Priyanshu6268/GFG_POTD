class Solution {
  public:
    long long findNth(long long n) {
        long long num=0;
        string s="";
        while(n>1)
        {
            long long r=(n%9);
            s+=to_string(r);
            n=n/9;
        }
        s+=to_string(n);
        reverse(s.begin(),s.end());
        num=stoll(s);
        return num;
    }
};
