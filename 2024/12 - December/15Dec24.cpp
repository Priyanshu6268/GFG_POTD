class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        if(arr.size()==1)
        return 0;
        if(arr[0]>arr[1])
        return 0;
        if(arr[arr.size()-1]>arr[arr.size()-2])
        return arr.size()-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i]&& arr[i]>arr[i+1])
            return i;
        }
        return -1;
    }
};
