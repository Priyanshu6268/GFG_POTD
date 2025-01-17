//    https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1
class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        
        vector<int> res(n, 0);
        
        int countZeros = 0;
        int zeroIndex = -1;
        long totalProd = 1;
        
        for(int i = 0; i < n; ++i){
            if(arr[i] == 0){
                countZeros += 1;
                zeroIndex = i;
            }else{
                totalProd *= arr[i];
            }
        }
        
        if(countZeros > 1) return res;
        
        if(countZeros == 1){
            res[zeroIndex] = totalProd;
            
            return res;
        }
        
        for(int i = 0; i < n; ++i){
            res[i] = totalProd / arr[i];
        }
        
        return res;
    }
};
