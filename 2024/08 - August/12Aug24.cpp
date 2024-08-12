class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int m = arr2.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(arr1[i]);
        }
        for(int i = 0;i<m;i++){
            ans.push_back(arr2[i]);
        }
        sort(ans.begin(),ans.end());
        int num = ans[n] + ans[n-1];
        return num;
    }
};
