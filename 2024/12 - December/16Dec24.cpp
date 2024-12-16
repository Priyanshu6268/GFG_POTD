class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int> arr;
        for (int i : a) {
            arr.push_back(i);
        }
        for (int i : b) {
            arr.push_back(i);
        }
        sort(arr.begin(), arr.end());
        return arr[k - 1];
    }
};
