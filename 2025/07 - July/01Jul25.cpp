class Solution {
  public:
    int substrCount(string &s, int k) {
        int n=s.length();
        int l=0,r=0;
       map<char,int>mp;
        int len=0;
        while(r<n){
            mp[s[r]]++;
            while(mp.size()>k-1 || (r-l+1)>k){
                mp[s[l]]--;
                if(mp[s[l]]==0)mp.erase(s[l]);
                l++;
            }
            if(mp.size()==k-1 && (r-l+1)==k){
                len++;
            }
            r++;
        }
        return len;
    }
};
