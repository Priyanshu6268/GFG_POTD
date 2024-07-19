class Solution {
    vector<int> ans;
private:
    int merge(vector<int> &arr, vector<int> &indices, int low, int mid, int high) {
        vector<int> temp; // temporary array
        int left = low;      // starting index of left half of arr
        int right = mid + 1;   // starting index of right half of arr

        vector<int> tempIndices;

        //Modification 1: cnt variable to count the pairs:
        int cnt = 0;

        //storing elements in the temporary array in a sorted manner//
        while (left <= mid && right <= high) {
            if (arr[indices[left]] <= arr[indices[right]]) {
                tempIndices.push_back(indices[left]);
                ans[indices[left]] += cnt; // add the count of elements smaller than current left element
                left++;
            }
            else {
                tempIndices.push_back(indices[right]);
                cnt++; // Modification 2: count the inversions
                right++;
            }
        }

        // if elements on the left half are still left //
        while (left <= mid) {
            tempIndices.push_back(indices[left]);
            ans[indices[left]] += cnt; // add the remaining count to all left elements
            left++;
        }

        //  if elements on the right half are still left //
        while (right <= high) {
            tempIndices.push_back(indices[right]);
            right++;
        }

        // transfering all elements from tempIndices to indices //
        for (int i = low; i <= high; i++) {
            indices[i] = tempIndices[i - low];
        }

        return cnt; // Modification 3
    }

    int mergeSort(vector<int> &arr, vector<int> &indices, int low, int high) {
        int cnt = 0;
        if (low >= high) return cnt;
        int mid = (low + high) / 2 ;
        cnt += mergeSort(arr, indices, low, mid);  // left half
        cnt += mergeSort(arr, indices, mid + 1, high); // right half
        cnt += merge(arr, indices, low, mid, high);  // merging sorted halves
        return cnt;
    }

public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        ans.resize(n, 0);
        
        vector<int> indices(n);
        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }
        mergeSort(nums, indices, 0, n - 1);
        return ans;
    }
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        return countSmaller(arr);
    }
};
