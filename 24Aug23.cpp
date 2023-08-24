class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
        if(s1=="0"|| s2=="0"){
            return "0";
        }
        int sign=1;
       if(s1[0]=='-'){
           
           sign*=-1;
           
           s1=s1.substr(1);
           
       }
       if(s2[0]=='-'){
           sign*=-1;
           s2=s2.substr(1);
       }
        
        
      int n1=s1.size();
      int n2=s2.size();
      vector<int>ans(n1+n2);
      
      for(int j=n2-1;j>=0;j--){
          
          for(int i=n1-1;i>=0;i--){
              
              ans[i+j+1]+=(s2[j]-'0')*(s1[i]-'0');
              ans[i+j]+=ans[i+j+1]/10;
              ans[i+j+1]%=10;
              
          }
      }
      
      int a=0;
      while(a<ans.size() && ans[a]==0){
          a++;
      }
      string s3="";
  if(sign<1){
      s3+='-';
  }    
  
  
      while(a<ans.size()){
s3+=char(ans[a]+'0');
a++;
      }
      
      return s3;
    }

};
