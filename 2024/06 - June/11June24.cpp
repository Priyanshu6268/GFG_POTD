class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        long long ans=0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({abs(brr[i]-arr[i]),i});
        }
        sort(v.begin(),v.end());
        for(int i=n-1;i>=0;i--)
        {
            int a=v[i].second;
            if((arr[a]>brr[a]&&x>0)||y==0)
            {
                ans+=arr[a];
                x--;
            }
            else
            {
                y--;
                ans+=brr[a];
            }
        }
        return ans;

    }
};
