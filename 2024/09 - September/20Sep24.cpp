class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
        int count=0;
        int max=height[0];
        for(int i=1;i<height.size();i++){
            if(height[i]>max){
                count++;
                max=height[i];
            }
        }
        return count+1;
    }
};
