class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) 
    {
        // code here
        unordered_map<int,int> a;
        int sum = 0, c = 0;
        for(i : arr)
        {
            sum += i;
            if(sum == k)
            {
                c++;
            }
            if(a.find(sum-k) != a.end())
            {
                c += a[sum - k];
            }
            a[sum]++;
        }
        return c;
    }
};
