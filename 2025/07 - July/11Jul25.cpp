class Solution {
  public:
    int fav(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        return fav(n-1) + fav(n-2);
    }
    int solve(int n) {
        if (n == 1) return 0;
        if (n == 2) return 1;
        return solve(n - 1) * 2 + fav(n - 1);
    }
    int countConsec(int n) {
      return solve(n);
    }
};

