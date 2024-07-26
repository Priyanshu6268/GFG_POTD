class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int arr[26]={0}, cnt=0, s=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
            {
                arr[str[i]-'a']++;
                s++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
                cnt++;
        }
        return (cnt<=k) && s>=26;
    }
};
