class Solution {
public:
    pair<int, int> LIS_with_indices(const vector<int>& nums, vector<int>& lis_indices) {
        int n = nums.size();
        vector<int> tail;
        vector<int> tail_idx;
        vector<int> prev(n, -1);

        for (int i = 0; i < n; ++i) {
            int num = nums[i];
            int pos = lower_bound(tail.begin(), tail.end(), num) - tail.begin();

            if (pos == tail.size()) {
                tail.push_back(num);
                tail_idx.push_back(i);
            } else {
                tail[pos] = num;
                tail_idx[pos] = i;
            }

            if (pos > 0) {
                prev[i] = tail_idx[pos - 1];
            }
        }

        int len = tail.size();
        int lis_end = tail_idx.back();
        int lis_start = lis_end;

        lis_indices.clear();
        for (int i = lis_end; i != -1; i = prev[i]) {
            lis_indices.push_back(i);
        }
        reverse(lis_indices.begin(), lis_indices.end());

        return {lis_indices.front(), lis_indices.back()};
    }

    int nonLisMaxSum(vector<int>& arr) {
        vector<int> lis_indices;
        LIS_with_indices(arr, lis_indices);

        unordered_set<int> lis_set(lis_indices.begin(), lis_indices.end());
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (lis_set.count(i) == 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
};
