class Solution{
public:
     stack<int> insertAtBottom(stack<int> st,int ele){
    //base case
    if (st.empty()) 
    {
        //agar empty hai then push the ele and return the stack
        st.push(ele);
        return st; 
    }
    
    
    //ek case solve kro
    //phele top ele ko save kro
    //then top ele ko pop kro 
    //recursion lgao
    //bar bar recursion lgega hence stack at last empty mil jayega // hence base case achieved
    //uske bad ele push hoke ajayega
    //top ele ko push kro or return maro 
    //last mein stack with ele at bottom mil jayega
    //hence solved
    
    int top = st.top();
    st.pop();
    st = insertAtBottom( st, ele);
    st.push(top);
    return st;
    
    }
};
