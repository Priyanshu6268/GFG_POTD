class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        vector<int> temp(n, -1);
        for(int i=0;i<n;i++){
            if(arr[i]>k)
                temp[i] = 1;
        }
        
        unordered_map<int, int> index;
        int csum = 0;
        int ans = 0;
        
        for(int i=0;i<n;i++){
            csum+=temp[i];
            if(csum>0)
                ans = i+1;
            else if(index.find(csum-1) != index.end())
                ans = max(ans, i-index[csum-1]);
            
            if(index.find(csum)==index.end())
                index[csum]=i;
        }
        
        return ans;
    }
};
