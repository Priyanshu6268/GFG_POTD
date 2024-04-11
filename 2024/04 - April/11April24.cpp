class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
      int grayToBinary(int n)
    {
        
        // Your code here
        int ans = 0;
        int last = 0; // last bit in answer
        
        for(int i = 31; i >= 0; i--) {
            int last_bit = (n >> i) & 1; // ith bit
            int XOR = (last ^ last_bit); // XOr of ith bit with last bit
            ans |= XOR;
            ans = (ans << 1);// for next iteration
            last = XOR;
        }
        
        ans = ans >> 1; // as one extra zero added at last step --> so ans get doubled.
        // Make it half
        return ans;
        
    }
};
