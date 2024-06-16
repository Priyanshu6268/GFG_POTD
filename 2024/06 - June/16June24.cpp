//      https://www.geeksforgeeks.org/problems/sum-of-prime4751/1
class Solution {
  public:
    bool prime(int n){
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0){
              return false;
          }
        }
      return true;
    }
    vector<int> getPrimes(int n) {
        // code here
        vector<int>arr1;
        for(int i=2;i<=(n/2);i++){
            int diff=n-i;
            if(i<=n && prime(i) && prime(diff)){
                arr1.push_back(i);
                arr1.push_back(diff);
                return arr1;
            }
        }
           return {-1,-1};
    }
};
