class Solution {
  public:
    int longestSubarray(vector<int>& arr) {
        int n = arr.size();
        vector<int>PrevoiusGreater(n , -1);
        vector<int>NextGreater(n, n);
        stack<int>st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[i] >= arr[st.top()])
                st.pop();
            if(!st.empty())
                PrevoiusGreater[i] = st.top();
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[i] >= arr[st.top()])
                st.pop();
            if(!st.empty())
                NextGreater[i] = st.top();
            st.push(i);
        }
        while(!st.empty())
            st.pop();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int l = PrevoiusGreater[i];
            int r = NextGreater[i];
            int length = r - l - 1;
            if(length >= arr[i])
                ans = max(ans , length);
        }
        return ans;
    }
};
