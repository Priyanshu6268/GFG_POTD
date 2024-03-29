class Solution {
public:
    vector<int> rotate(int n, int d) {
        int mask_16 = (1 << 16) - 1;
        d = d % 16;
        
        vector<int> out(2);
        out[0] = (n << d | n >> (16 - d)) & mask_16;
        out[1] = (n >> d | n << (16 - d)) & mask_16;
        
        return out;
    }
};
