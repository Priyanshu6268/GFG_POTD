class Solution {
public:
    int equilibriumPoint(long long a[], int n) {
        long long sum = 0, preSum = 0;
        for(int i = 0; i < n; ++i)
            sum += a[i];
            
        for(int i = 0; i < n; ++i){
            sum -= a[i];
            if(sum == preSum)
                return i+1;
            preSum += a[i];
        }
        return -1;
    }
};
