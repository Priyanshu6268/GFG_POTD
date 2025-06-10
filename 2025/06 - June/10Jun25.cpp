class Solution {
  public:
    int countStrings(string &s) {
        // code here
        int f[26]={0};
        int dup=0;
        for(char &ch:s){
            f[ch-'a']++;
            if(f[ch-'a']>1) dup=1;
        }
        int ans=dup;
        int tot=s.length();
        for(int i=0; i<26; i++){
            tot-=f[i];
            ans+=(tot*f[i]);
        }
        return ans;
    }
};
