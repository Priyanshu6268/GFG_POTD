class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(auto&str:arr){
            string temp=str;
            sort(str.begin(),str.end());
            mp[str].push_back(temp);
        }
        for(auto&str:mp){
            result.push_back(str.second);
        }
        sort(result.begin(),result.end());
        return result;
    }
};
