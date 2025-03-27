class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arive, vector<int>& dep) {
        // Your code here
        int n = arive.size();
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({arive[i],-1});
            arr.push_back({dep[i],1});
        }
        sort(arr.begin(),arr.end());
        int ans = 0, cnt = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i][1] == -1) cnt++;
            else cnt--;
            ans = max(ans,cnt);
        }
        return ans;
    }
};
