class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
     int maxi = *max_element(b.begin(),b.end());
      vector<int>ans;  
     vector<int>temp(maxi+1,0);
     for(int i=0;i<b.size();i++)
     {
        temp[b[i]]++;
     }
     for(int i=1;i<=maxi;i++)
     {
        temp[i]+=temp[i-1];
     }
     for(int i=0;i<a.size();i++)
     { 
        int val = temp[a[i]];
        if(a[i]>maxi)
        {
          val = temp[maxi];
        }
        
        ans.push_back(val);
     }
     return ans;
    }
};
