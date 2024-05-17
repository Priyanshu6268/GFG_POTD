class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        unordered_map<int,int>m;
        for(int i=n-1;i>=0;i--){
            if(m[x+arr[i]]){
                return 1;
            }
            m[arr[i]]++;
        }
        m.clear();
                for(int i=0;i<n;i++){
            if(m[x+arr[i]]){
                return 1;
            }
            m[arr[i]]++;
        }
        return -1;
        
       
    }
};
