class Solution {
  public:
    vector<int> subarraySum(vector<int> &a, int target) {
      int j=0;
      int sum=0;
      for(int i=0;i<a.size();i++){
          sum+=a[i];
          
          while(sum>target)sum-=a[j++];
          
          if(sum==target)return {j+1,i+1};
      }
      return {-1};
    }
};
