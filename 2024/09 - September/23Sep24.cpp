class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> res(2,0); int n = arr.size();
        int f[n+1]; memset(f,0,sizeof(f));
        for ( auto i : arr ) f[i]++;
        for ( int i = 1; i<=n; i++ ){
            if ( f[i] == 2 ) res[0] = i;
            if ( f[i] == 0 ) res[1] = i;
        } return res;
    }
};
