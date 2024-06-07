class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {
    // Your code here
    unordered_map<int, int> mp;
    
    // Using the difference array concept with unordered_map
    for (int i = 0; i < n; ++i) {
        mp[l[i]] += 1;
        mp[r[i] + 1] -= 1;
    }

    int max_occurrences = 0;
    int max_occurred_element = INT_MIN;
    int current_count = 0;

    // Iterate over the range to find the maximum occurred integer
    for (int i = 0; i <= maxx; ++i) {
        current_count += mp[i];
        if (current_count > max_occurrences) {
            max_occurrences = current_count;
            max_occurred_element = i;
        }
    }

    return max_occurred_element;
}

};
