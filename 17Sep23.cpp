class Solution {
public:
    vector<long long> printFibb(int n) 
    {
        if(n <= 2)
            return vector<long long>(n, 1);
            
        vector<long long> out(n);
        out[0] = out[1] = 1;
        
        for(int i = 2; i < n; ++i) {
            out[i] = out[i - 1] + out[i - 2];
        }
        
        return out;
    }
};
