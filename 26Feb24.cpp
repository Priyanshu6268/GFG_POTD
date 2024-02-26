class Solution{
	public:
		  vector<string> AllPossibleStrings(string s){
            // Code here
            int n= s.length();
            vector<vector<string>>dp(n); 
            //stores the substrings starting at ith char
            for (int i=n-1; i>=0; i--){
                vector<string>vs; 
                //for substring starting with ith char
                string s1; s1+=s[i];
                vs.push_back(s1);
                for (int j=i+1; j<n; j++){
                    string s2; s2.push_back(s[i]);
                    for (auto x: dp[j])
                        vs.push_back(s2+x);
                }
                dp[i]=vs;
            }
            
            vector<string>ans;
            for (auto v: dp)
                for (auto x: v)
                    ans.push_back(x);
                
            sort (ans.begin(), ans.end());
            return ans;
        }
};
