class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int , int>mp;
        for(auto e:arr){
            mp[e]++;
            if(mp[e] > arr.size()/2) return e;
        }
        return -1;
    }
};
