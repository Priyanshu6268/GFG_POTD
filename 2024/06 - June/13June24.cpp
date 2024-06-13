class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
       int arr[1000000]={1,1,1};
       int mod=(int) (1e9+7);
       for (int i=3;i<=n;i++)
        {
            arr[i]=(arr[i-2]+arr[i-3])% mod;
        }
        return arr[n];
    }
    
};
