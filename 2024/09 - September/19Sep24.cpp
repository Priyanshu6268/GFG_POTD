class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string ans = "";
        int i = str.size()-1;
        int j=0;
        while(i>=0){
            if(str[i]!='.'){
               j++;
            }
            else if(str[i]=='.'){
                ans+=str.substr(i+1,j);
                j=0;
                ans+='.';
            }
            i--;
        }
        ans+=str.substr(i+1,j);
        return ans;
    }
};
