class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        set<int>st;
        for(auto it:m){
            st.insert(it.second);
        }
        if(st.size()==m.size()){
            return true;
        }
        return false;
    }
};
