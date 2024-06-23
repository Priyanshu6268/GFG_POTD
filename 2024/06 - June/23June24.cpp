class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
         stack<int>st;
       vector<int>v;
       int count = 0;
       
       for(int i=0; i<str.length(); i++){
           if(str[i]=='(') {
               count++;
               st.push(count);
               v.push_back(count);
               
           }
           else if(str[i]==')'){
               int index = st.top();
               
              v.push_back(index);
               st.pop();
           }
       }
       return v;
    }
};
