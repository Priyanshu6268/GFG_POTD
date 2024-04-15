class Solution {
  public:
  int search(vector<int> arr,int n,int key){
      int l=0;
      int h=n-1;
      
      while(l<=h){
          int mid=l+(h-l)/2;
          if(arr[mid]<=key){
             l=mid+1;
          }
          else{
              h=mid-1;
          }
      }
      return l;
  }
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        sort(b.begin(),b.end());
        
        vector<int> ans;
        for(int i=0;i<q;i++){
            ans.push_back(search(b,n,a[query[i]]));
        }
        return ans;
    }
};
