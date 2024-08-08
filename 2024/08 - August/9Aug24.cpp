class Solution {
  public:
   int mod = 1e9+7;

    int Maximize(vector<int> arr) 
    {
        sort(arr.begin(), arr.end());
        
        long long sum = 0;
        
        for (int i = 0; i < arr.size(); i++) 
        {
            sum = ( sum+i *(long long) arr[i]) % mod;
        }
        
        return sum;
    }
};
