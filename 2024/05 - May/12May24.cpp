class Solution {
  public:
    int minSteps(int d) {
        // code here
        int k=1;
        int curr=0,sum=0;
        while(true){
            sum+=k;
            curr++;
            if(d%2==0 && sum%2==0 && d<=sum){
                return curr;
            }
            else if(d%2 && sum%2 && d<=sum){
                return curr;
            }
            k++;
        }
        return -1;
    }
};
