class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {

        int n = arr.size();
        vector<int> left(n,INT_MAX), right(n,INT_MIN);
        left[0] = arr[0], right[n-1] = arr[n-1];
        
        for(int i = 1; i < n; i++){
            
            left[i] = min(arr[i], left[i-1]);
            
            right[n-i-1] = max(arr[n-i-1], right[n-i]);
        }
        
        for(int i = 0; i < n; i++){
            
            if(arr[i] > left[i] && arr[i] < right[i]) return {left[i],arr[i],right[i]};
        }
        
        return {};
        
    }
};
