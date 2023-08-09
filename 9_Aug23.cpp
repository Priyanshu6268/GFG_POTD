class Solution{
public: 

    bool prime(long long int n){
        if (n == 1){
            return false;
        }
        if (n == 2 || n == 3){
            return true;
        }
        for (int i = 2; i*i <= n; i++){
            if (n%i == 0){
                return false;
            }
        }
        return true;
    }

    long long int largestPrimeFactor(int N){
        // code here
        long long int ans = INT_MIN;
        
        if (prime(N)){
            return N;
        }
        for (int i = 2; i*i<=N; i++){
            if (N%i == 0){
                if (prime(i)){
                    if (ans < i)
                        ans = i;
                }
                if (prime(N/i)){
                    if (ans < N/i)
                        ans = N/i;
                }
                // ans = max(ans, i);
            }
        }
        // long long int x = N/ans;
        // if (x*ans == N && prime(x)){
        //     return max(x, ans);
        // }
        return ans;
    }
};
