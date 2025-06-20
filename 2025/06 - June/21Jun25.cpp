class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        vector<int> police, thief;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 'P') police.push_back(i);
            else if (arr[i] == 'T') thief.push_back(i);
        }

        int i = 0, j = 0, count = 0;
        
        while (i < police.size() && j < thief.size()) {
            if (abs(police[i] - thief[j]) <= k) {
                count++;
                i++;
                j++;
            } else if (thief[j] < police[i]) {
                j++;
            } else {
                i++;
            }
        }

        return count;
    }
};
