class Solution {
public:
    int maxPartitions(string &s) {
        unordered_map<char, int> lastIndex;
        int n = s.size();
        
        // Store last occurrence of each character
        for (int i = 0; i < n; i++) {
            lastIndex[s[i]] = i;
        }

        int partitions = 0, maxLast = -1;
        for (int i = 0; i < n; i++) {
            maxLast = max(maxLast, lastIndex[s[i]]);
            if (i == maxLast) {  // Partition ends here
                partitions++;
            }
        }
        
        return partitions;
    }
};
