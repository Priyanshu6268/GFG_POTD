class Solution{
public:
    int nextHappy(int N){
        // code here
        int next = N + 1;
    int res = next;
    while (true)
    {
        if (isHappy(next) == 1)
            return next;
        next++;
        res = next;
    }
    }
    
    int isHappy(int N) {
    if (N == 1 || N == 7)
        return 1;
    int sum = N, curr = N;
    while (sum > 9) 
    {
        sum = 0; 
        while (curr > 0) {
            int d = curr % 10; 
            sum += d * d;
            curr /= 10;
        }

        if (sum == 1)
            return 1;
        curr = sum;
    }
    if (sum == 7)
        return 1;
    return 0;
    }
};
