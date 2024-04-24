class Solution
{
public:
    int ways(int x, int y)
    {
        //code here.
         vector<int>xx(x+1, 1);
        // vector<int>yy(y, 1);
        int mod=1e9+7;
        
        while(y--)
        {
            for(int i=x-1;i>=0;i--)
            {
                xx[i]= (xx[i]+xx[i+1])%mod;
            }
        }
        
        return xx[0];
    }
};
