class Solution {
  public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        sort(arr.begin(), arr.end());
       int count = 1;
       int max_count = 1;
       int last = arr[0];
       
       for(int i=1; i<arr.size(); i++){
           if(arr[i] == arr[i-1]) continue;
           if(last+1 == arr[i]) count++;
           else count = 1;
           last = arr[i]; 
           max_count = max(max_count, count);
       }
       
       return max_count;
    }
};
