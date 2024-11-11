class Solution {
  public:
    int minIncrements(vector<int> arr) {
        // Code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        set<int>hash;
        int cnt = 0;
        int lastMaxi = 0;
        for(int i = 0; i < n; i++){
            if(hash.find(arr[i])!= hash.end()){
                hash.insert(lastMaxi + 1);
                cnt += (lastMaxi - arr[i]) + 1;
                lastMaxi = max(lastMaxi + 1, arr[i]);
                
            }
            hash.insert(arr[i]);
            lastMaxi = max(lastMaxi, arr[i]);
        }
        return cnt;
    }
};
