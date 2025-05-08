class Solution {
  public:
    int findMissing(vector<int> &arr) {
         int n=arr.size();
         int l=0,r=n-1;
         int d=arr[1]-arr[0];
         while(l<=r){
             int mid=l+((r-l)/2);
             if(arr[0]+mid*d<arr[mid]){
                 r=mid-1;
             }
             else{
                 l=mid+1;
             }
         }
         return arr[0]+(l*d);
        
    }
};
