class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size() , m = arr[0].size() ;
        int i = 0 , j = m - 1 ;
        while(i < n && j >= 0){
            if(arr[i][j] == 1) j -- ;
            else i ++ ;
        }
        j ++ ;
        int ans = -1 ;
        for(int x = 0 ; x < n ; x ++){
            if(arr[x][j] == 1) { ans = x ; break ; }
        }
        return ans ;
    }
};
