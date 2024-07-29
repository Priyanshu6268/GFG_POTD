class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        // code here
        int r=arr.size();
        int c=arr[0].size();
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(arr[j][i]==1)
                    return j;
            }
        }
        return -1;
    }
};
