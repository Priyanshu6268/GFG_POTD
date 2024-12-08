class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    int n = arr.size(); 
    int i = 0; 
    int j = 1; 
  while (i < n) {
    vector<int> ele = arr[i]; 
    j = i + 1; 
    while (j < n && arr[j][0] <= ele[1]) {
        ele[1] = max(ele[1], arr[j][1]);
        j++;
    }
    ans.push_back(ele);
    
    i = j; 
}
    return ans;
}
};
