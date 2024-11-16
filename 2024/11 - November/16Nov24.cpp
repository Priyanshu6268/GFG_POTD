class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n =arr.size();
        int left =0;
   
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                arr[left] =arr[i];
                left++;
            }
        }
        
        for(int i=left;i<n;i++){
            arr[i]=0;
        }
    }
};
