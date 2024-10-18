class Solution {
  public:
    int getSingle(vector<int>& arr) {
        unordered_map<int,int> f;
        for ( auto i : arr ) f[i]++;
        for ( auto i : f ) if ( i.second%2 == 1 ) return i.first;
        return -1;
    }
};
