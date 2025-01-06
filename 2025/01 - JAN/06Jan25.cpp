class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        vector<int> ans;
        int d = INT_MAX;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0;
        int j = n-1;
        while(i<j){
            int sum = arr[i]+arr[j];
            if(d>(abs(target-sum))){
                d = abs(target-sum);
                ans = {arr[i],arr[j]};
            }
            if(sum>=target){
                j--;
            }else{
                i++;
            }
        }
        
        return ans;
    }
};
