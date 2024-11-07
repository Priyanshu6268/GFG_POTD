class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        // code here
        if(s1==s2)return 1;
        string temp = s1;
        int cnt=1;
        while(temp.length() < s2.length()){
            temp+= s1;
            cnt++;
            if(temp.find(s2)!=string::npos){
                return cnt;
            }
        }
        
        temp+=s1;
        if(temp.find(s2)!=string::npos){
            cnt++;
            return cnt;
        }
        
        return -1;
    }
};
