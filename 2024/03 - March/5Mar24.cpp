class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
          int ans = INT_MIN;
    int i = 0;
    while (i < n) {
        int j = n - 1;
        while (j >= i && a[j] < a[i]) {
            j--;
        }
        ans = max(ans, j - i);
        i++;
    }
    return ans;
    }
};
