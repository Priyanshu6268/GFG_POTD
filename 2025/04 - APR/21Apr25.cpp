class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int a[1000000]={0};
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        for(int i=0;i<arr.size()+1;i++){
            if(a[i+1]==0)
            return i+1;
        }
    }
};
