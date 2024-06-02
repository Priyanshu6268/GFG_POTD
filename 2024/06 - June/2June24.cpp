class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
         vector<int>v;
        int xortillnow=0;
        for(int i=q-1;i>=0;i--){
            if(queries[i][0]==1){
                xortillnow^=queries[i][1];
            }else{
                v.push_back(queries[i][1]^xortillnow);
            }
        }
        v.push_back(xortillnow);
        sort(v.begin(),v.end());
        return v;
        // code here
    }
};
