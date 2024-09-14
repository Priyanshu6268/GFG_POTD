class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int>positive;
        vector<int>negative;
        for(auto i:arr){
            if(i<0) negative.push_back(i);
            else positive.push_back(i);
        }
        int i=0;
        int j=0;
        int index=0;
        while(i<positive.size() && j<negative.size()){
            arr[index++]=positive[i++];
            arr[index++]=negative[j++];
        }
        while(i<positive.size()) arr[index++]=positive[i++];
        while(j<negative.size()) arr[index++]=negative[j++];
    }
};
