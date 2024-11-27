class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        for(int i = 0;i < n;i++){
            while(arr[i] != i+1 && arr[i] > 0 && arr[i] <= n){
                if(arr[i] == arr[arr[i]-1]) break;
                swap(arr[i],arr[arr[i]-1]);
                
            }
        }
        for(int i = 0;i < n;i++) if(arr[i] != i+1) return i+1;
        return n+1;
    }
};
