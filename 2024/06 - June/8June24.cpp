class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int j=0;
        for(int i=0;i<n+1;i++)
        {
            //int j=0;
                if(arr1[i]!=arr2[j])
                    return i;
            j++;
        }
    }
};
