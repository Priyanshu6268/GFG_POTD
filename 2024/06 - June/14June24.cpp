class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum=0;
        int p=n;
        while(p>0)
        {
            int rem=p%10;
            sum+=pow(rem,3);
            p/=10;
        }
        if(n==sum)
        return "Yes";
        else
        return "No";
    }
};
