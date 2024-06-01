class Solution {
  public:
    string oddEven(string s) {
        int n = s.length();
        map<char,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        int x = 0,y=0;
        for(auto it:mp)
        {
            int a = (it.first - 'a')+1;
            if(a%2 == 0)
            {
                if(it.second %2==0)
                    x++;
            }
            else
            {
                if(it.second%2)
                    y++;
            }
        }
        if((x+y)%2==0)
            return "EVEN";
        return "ODD";
    }
};
