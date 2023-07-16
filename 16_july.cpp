//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack<int> st;
        while(q.size()){
            st.push(q.front());
            q.pop();
        }
        while(st.size()){
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};
