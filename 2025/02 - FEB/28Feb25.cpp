class Solution {
  public:
    int evaluate(vector<string>& arr) {
        stack<int> st;
        
        for(auto i : arr){
            if(i!="+" && i != "-" && i !="/" && i!="*"){
                st.push(stoi(i));
            }
            else {
                int s = st.top();
                st.pop();
                int f = st.top();
                st.pop();
                int res ;
                if(int(i[0]) ==43 ) res = f+s;
                else if(int(i[0]) ==45 ) res = f-s;
                else if(int(i[0]) ==47 ) res = f/s;
                else if(int(i[0]) ==42 ) res = f*s;
                st.push(res);
            }
        }
        return st.top();
    }
};

