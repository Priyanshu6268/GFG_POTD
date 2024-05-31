class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        int mask = 240;
        int temp = n&mask;
        temp = temp>>4;
        mask = 15;
        int temp2 = n&15;
        temp2 = temp2<<4;
        return temp|temp2;
    }
};
