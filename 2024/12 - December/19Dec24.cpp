class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
       int j = 0, lst = 0;
       for(int i = 0  ; i<arr.size() ; i++){
           int g = (arr[i]-lst)-1;
           if((j+g)>=k) return lst+k-j;
           j += g;
           lst=arr[i];
       }
       if(j<k) return lst+k-j;
       return 0;
    }
};
