//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    unordered_map<string, bool> mp;
    bool solve(string s, unordered_set<string>& st){
        if (s.length() == 0) return true;
        if (mp.find(s) != mp.end()) 
            return mp[s];
        
        for (int i=0;i<s.length();i++){
            string res = s.substr(0, i+1);
            if (st.count(res)){
                if (solve(s.substr(i+1), st))
                   return mp[s] = true;
            }
        }
        
        return mp[s] = false;
    }

    int wordBreak(string A, vector<string> &B) {
       unordered_set<string> st;
       for (auto x: B){
           st.insert(x);
       }
       return solve(A, st);
    }
};
