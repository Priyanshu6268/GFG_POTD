class Solution {
public:
    int lower_bound(int arr[], int n, int x) {
        int l = 0, r = n - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (arr[m] >= x)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }

    int upper_bound(int arr[], int n, int x) {
        int l = 0, r = n;
        while (l < r) {
            int m = (l + r) / 2;
            if (arr[m] > x)
                r = m;
            else
                l = m + 1;
        }
        return r - 1;
    }

    vector<int> find(int arr[], int n, int x) {
        int firstOccur = lower_bound(arr, n, x);
        if (arr[firstOccur] != x)
            return {-1, -1};

        int lastOccur = upper_bound(arr, n, x);
        return {firstOccur, lastOccur};
    }
};
