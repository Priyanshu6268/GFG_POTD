class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int first=-1,second=-1;
        for(int a:arr){
            if(a==first) continue;
            if(a>first){
                second=first;
                first=a;
            }
            else if(a>second) second=a;
        }
        return second;
    }
};
