class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<n+2;i++){
            m[arr[i]]++;
            if(m[arr[i]]==2){
                ans.push_back(arr[i]);
                m[arr[i]]=0;
            }
        }
        return ans;
    }
};
