class Solution {
public:
    int isPossible(int N, int arr[]) {
        int sum = 0;
        for(int i = 0; i < N; i++)
            sum += arr[i] % 3;
        return sum % 3 == 0;
    }
};
