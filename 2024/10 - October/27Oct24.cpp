class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>1;i--){
            int left=0;
            int right=i-1;
            while(left<right){
                if((arr[left] + arr[right]) == arr[i])
                    return true;
                else if((arr[left] + arr[right]) < arr[i])
                    left++;
                else
                    right--;
            }
        }
        return false;
    }
};