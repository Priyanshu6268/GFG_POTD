class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int cnt = 1;
        int i=0,j=0;
        while(i<arr1.size() && j<arr2.size()){
            if(cnt==k){
                return min(arr1[i],arr2[j]);
            }
            if(arr1[i]<=arr2[j]) i++;
            else j++;
            cnt++;
        }
        while(i<arr1.size()){
            if(cnt==k) return arr1[i];
            i++;
            cnt++;
        }
        while(j<arr2.size()){
            if(cnt==k) return arr2[j];
            j++;
            cnt++;
        }
        return cnt;
    }
};
