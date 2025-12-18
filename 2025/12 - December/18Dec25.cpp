class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end(),[&](auto it1,auto it2){
        int a=it1%2;
        int b=it2%2;
        if(a!=b)
          return a>b;  
        else
        {
            if(a==1) return it1>it2;  
             else     return it1<it2;
        }
         });
    }
};
