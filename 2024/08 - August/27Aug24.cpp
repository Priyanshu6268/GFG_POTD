class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int m=0;
       int n=arr.size();
       for(int i=0;i<n;i++){
            int l=0;
       int r=0;
           for(int j=i;j>=0;j--){
               if(arr[j]<arr[i]){
                   l=arr[j];
                   break;
               }
           }
           for(int j=i;j<n;j++){
               if(arr[j]<arr[i]){
                   r=arr[j];
                   break;
               }
           }
           m=max(m,abs(r-l));
           
       }
    return m;   
    }
};
