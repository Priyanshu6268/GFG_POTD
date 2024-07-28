class Solution {
  public:
    string removeDups(string str) {
        // Your code goes here
        int n=str.size();
          unordered_map<char,int>mp;
          string res="";
          for(int i=0;i<n;i++){
              if(mp.find(str[i])==mp.end()){
                  res.push_back(str[i]);
                  mp[str[i]]++;
              }
              else{
                  continue;
              }
          }
              return res;
    }
};
