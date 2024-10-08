class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int n = arr.size();
        int sec = -1, lar = 0;
        for(int i : arr){
            if(i > lar){
                sec = lar;
                lar = i;
            }
            else if(i != lar){
                if(i > sec || sec == -1)
                    sec = i;
            }
        }
        return sec + lar;
    }
};
