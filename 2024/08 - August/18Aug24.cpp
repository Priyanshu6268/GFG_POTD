class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
         int sum = 0,n = arr.size();
         for(int i = 0 ; i < n; i++){
             sum+= arr[i];
         }
         if(sum & 1) return false;
         int k = sum /2;
         
         for(int i = 0 ; i < n;i++){
             k -= arr[i];
             if(k== 0) return true;
             else if(k < 0) return false;
         }
         return false;
    }
};
