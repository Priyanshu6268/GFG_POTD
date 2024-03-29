class Solution {
public:
    void pushZerosToEnd(int arr[], int n) {
        int i = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j]) {
                arr[i++] = arr[j];
            }
        }

        for (; i < n; ++i) {
            arr[i] = 0;
        }
    }
};
