class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>> v;
        for(int i=0;i<mp.size();i++){
            v.push_back(make_pair(mp[i],-i));
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            for(int k=0;k<v[i].first;k++){
                ans.push_back(-v[i].second);
            }
        }
        return ans;
    }
};
