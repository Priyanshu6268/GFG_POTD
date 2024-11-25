class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int leftToRight = 1;
        int rightToLeft = 1;
        int n = arr.size();
        int result = arr[0];
        
        for (int i = 0; i < n; i++) {
            if (leftToRight == 0)
                leftToRight = 1;
            if (rightToLeft == 0)
                rightToLeft = 1;
                
            leftToRight *= arr[i];
            
            rightToLeft *= arr[n-i-1];
            
            result = max({result, leftToRight, rightToLeft});
        }
        
        return result;
    }
};
