class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch); 
            }
            else{
                if(st.empty())  return false;
                if((st.top()=='(' && ch==')') || (st.top()=='{' && ch=='}')||(st.top()=='[' && ch==']')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty())   return true;
        return false;
    }
};
