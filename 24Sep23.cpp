class Solution {
public:
    vector<int> duplicates(int arr[], int n) {
        int cnt[n] = {0};
        for(int i = 0; i < n; ++i)
            ++cnt[arr[i]];

        vector<int> out;
        for(int i = 0; i < n; ++i)
            if(cnt[i] > 1)
                out.push_back(i);

        if(out.size())
            return out;

        return {-1};
    }
};
