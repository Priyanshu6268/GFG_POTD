class Solution {
  public:
    string longestPalin (string S) {
        // code here
        string result="";
        int high;
        int low=0;
        int start=0;
        int maxlength=1;
        int n=S.size();
        for(int i=1;i<n;i++){
            low=i-1;
            high=i;
            while(low>=0 && high<n && S[low]==S[high]){
                if(high-low+1>maxlength){
                    start=low;
                    maxlength=high-low+1;
                }
                low--;
                high++;
            }
            low=i-1;
            high=i+1;
            while(low>=0 && high<n && S[low]==S[high]){
                if(high-low+1>maxlength){
                    start=low;
                    maxlength=high-low+1;
                }
                low--;
                high++;
            }
        }
        for(int i=start;i<start+maxlength;i++){
            result=result+S[i];
        }
        return result;
    
    }
};
