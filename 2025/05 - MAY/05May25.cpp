class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int n = arr.size() ; 
        int i = 0 , j = n-1 ; 
        while(i <= j) {
             int mid = (i + j) >> 1 ; 
            if(arr[mid] == target) return mid ; 
            else if(mid > 0 && arr[mid-1] == target) return mid-1 ; 
            else if(mid < n-1 && arr[mid+1] == target) return mid+1 ; 
            
            else if(arr[mid] > target) j = mid -1 ; 
            else i = mid+1 ; 
        }
        return -1 ; 
    }
};
