class Solution{
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    // Your code goes here
	    unordered_set<int> us;
        for(int i=0; i<m; i++){
            us.insert(b[i]);
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(us.find(a[i])==us.end()){
                ans.push_back(a[i]);
            }
        }
        return ans;
	} 
};
