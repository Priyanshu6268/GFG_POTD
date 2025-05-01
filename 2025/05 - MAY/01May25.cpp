class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> prev(1 , 1) ; 
        for(int i = 2 ; i <= n ; i++){
            vector<int> curr(i , 1) ; 
            for(int j = 1 ; j < i-1 ; j++){
                curr[j] = prev[j] + prev[j-1] ; 
            }
            prev = curr ; 
        }
        return prev ; 
    }
};
