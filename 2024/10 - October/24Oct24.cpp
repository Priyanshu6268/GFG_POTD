class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if((i+1)<n && arr[i]!=0 && arr[i]==arr[i+1])
            {
                arr[i]=2*arr[i];
                arr[i+1]=0;
            }
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] != 0)
            {
                swap(arr[i],arr[j]);
                j++;
            }
        }
        return arr;
    }
};
