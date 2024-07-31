class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans="";
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0;
        
        while(i<arr[0].size())
        {
            if(arr[0][i]==arr[n-1][i]){
            ans+=arr[0][i];
            i++;
            }
            else
            {
                break;
            }
        }
       if(!ans.empty())
       return ans;
       return "-1";
    }
};
