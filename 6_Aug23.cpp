class Solution{
    public:
    //Complete this function
    
    void per(string S,vector<string>&ans,int index=0){
        if(index>=S.length()){
            ans.push_back(S);
            return ;
        }
        for(int j=index;j<S.length();j++){
            swap(S[index],S[j]);
            per(S,ans,index+1);
            swap(S[index],S[j]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        int index=0;
       
        vector<string>ans;
        per(S,ans,index);
       sort(ans.begin(),ans.end());
        return ans;
    }
};
