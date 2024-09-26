class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int maxi=0;
        int cnt=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                cnt++;
            }
            else
            cnt=0;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
