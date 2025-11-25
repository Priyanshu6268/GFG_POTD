class Solution {
  public:
    int subarrayXor(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++)if((arr.size()-i)%2 && (i+1)%2)ans^=arr[i];
        return ans;
    }
};
