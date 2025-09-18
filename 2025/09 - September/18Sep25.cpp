class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        vector<int> ans(arr.size(),-1);
        stack<pair<int, int>> st;
        for(int i= arr.size()-2; i>=0; i--){
            st.push(make_pair(arr[i], i));
        }
        for(int i= arr.size()-1; i>=0; i--){
            int element= arr[i];
            while(!st.empty() and st.top().first<= element and st.top().second!=-i){
                st.pop();
            }
            if(st.empty()){
                
                ans[i]=-1;
            }
          else  if(!st.empty() and st.top().second!=i){
                ans[i]= st.top().first;
            }
              st.push(make_pair(arr[i], i));
        }
        return ans;
    }
};
