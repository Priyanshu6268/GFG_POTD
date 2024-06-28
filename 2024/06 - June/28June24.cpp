class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
           int n = arr.size();
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<=r && arr[i][l]==arr[i][r]){
                l++;r--;
            }
            if(l>r)return to_string(i)+" R";
        }
        for(int i=0;i<n;i++){
            int l=0,r=n-1;
            while(l<=r && arr[l][i]==arr[r][i]){
                l++;r--;
            }
            if(l>r)return to_string(i)+" C";
        }
        return "-1";
    }
};
