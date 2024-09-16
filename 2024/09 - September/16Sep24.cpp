class Solution {
  public:
    int maxLength(string s) {
        // code here
        stack<int> stk;
        stk.push(-1);
        int count=0;
        for (int i=0;i<s.length();i++){
            if(s[i]=='(') stk.push(i);
            else{
                stk.pop();
                if(stk.empty()) stk.push(i);
                int ans=i-stk.top();
                count=max(count,ans);
            }
        }
        return count;
    }
};
