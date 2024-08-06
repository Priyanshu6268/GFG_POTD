class Solution {
  public:
    int isValid(string str) {
        // code here
        int cnt=0;
        for(int i=0;i<str.size();i++)
        {
            string temp="";
            while(i<str.size()&&str[i]!='.')
            {
                temp+=str[i];
                i++;
            }
            if(str[i]=='.')
                cnt++;
            int num=stoi(temp);
            if(num>255)
                return false;
        }
        return cnt==3;
    }
};
