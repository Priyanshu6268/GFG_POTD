class Solution {
  public:
long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        long long A[3][3] = {{a,b,c},{1,0,0},{0,0,1}};
        long long B[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
        long long T[3][3] = {0};
        
        long long N = n-2;
        while (N > 0) {
            if (N % 2 != 0) {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        T[i][j] = 0;
                        for (int k = 0; k < 3; k++) {
                            T[i][j] = (T[i][j] + B[i][k] * A[k][j]) % m;
                        }
                    }
                }
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        B[i][j] = T[i][j];
                    }
                }
            }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    T[i][j] = 0;
                    for (int k = 0; k < 3; k++) {
                        T[i][j] = (T[i][j] + A[i][k] * A[k][j]) % m;
                    }
                }
            }
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    A[i][j] = T[i][j];
                }
            }
            
            N /= 2;
        }
        
        return (B[0][0] + B[0][1] + B[0][2]) % m;
    }
};
