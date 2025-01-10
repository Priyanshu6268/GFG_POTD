//      https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<int>res;
        int left=0;
        for(int i=0; i<k; i++) {
             mp[arr[i]]++;
        }
       res.push_back(mp.size());
        while(k<n) {
            if(mp[arr[left]]==1) {
                 mp.erase(arr[left]);
            } else {
                mp[arr[left]]--;
            }
              mp[arr[k]]+=1;
               res.push_back(mp.size());
              left++;
              k++;
        }
        return res;
    }
};
