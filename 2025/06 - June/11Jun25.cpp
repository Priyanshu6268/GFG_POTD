class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        int cnt = 0;
       stack<pair<int,int>> s;
       int n = max(color.size(),radius.size());
       for(int i = 0;i<n;i++){
           int x = color[i];
           int y = radius[i];
           if(!s.empty() && 
                s.top().first == x && s.top().second == y){
                    s.pop();
            }
            else{
                s.push({x,y});
            }
       }
       return s.size();
    }
};
