class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        vector<int> ans;
        sort(begin(arr) , end(arr) );
        
        int i = 0 , j = arr.size() - 1;
        
        while(i < j)
        {
            ans.push_back(arr[j]);
            ans.push_back(arr[i]);
            i++;
            j--;
        }
        
        if( arr.size() %2 != 0) ans.push_back(arr[j]);
        return ans;
    }
};
