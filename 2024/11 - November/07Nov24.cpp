class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int sum = 0;
        for(auto it:arr){
            sum+=it;
        }
        if(sum%3){
            return {-1,-1};
        }
        vector<int>ans;
        int i = 0, temp = 0;
        while(i<arr.size() && ans.size()<2){
            temp+=arr[i];
            if(temp == sum/3){
                ans.push_back(i);
                temp = 0;
            }
            i++;
        }
        if(ans.size() == 2){
            return ans;
        }
        return {-1,-1};
    }
};
