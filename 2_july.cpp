// User function Template for C++
class Solution{
    public:

    string toBinary(int n)
    {
        string s = "00000000000000000000000000000000";
        int i = 31;
        while(n){
            int d = n%2;
            if(d == 1){
                s[i] = '1';
            }
            i--;
            n = n/2;
        }
        return s;
    }
    int setSetBit(int x, int y, int l, int r){
        
        string a = toBinary(x);
        string b = toBinary(y);
        
        for(int i=32-l; i>=32-r; i--){
            if(b[i] == '1' && a[i] == '0'){
                a[i] = '1';
            }
        }
        return stoi(a, NULL, 2);
        
    }
};
