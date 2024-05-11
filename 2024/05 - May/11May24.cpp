class Solution {
  public:
    vector<int> jugglerSequence(int n) {
        // code here
                vector<int> sequence;
        
        while( n != 1) {
            sequence.push_back(n);
            
            if(n%2) {
                n = int(pow(n, 1.5));
            }
            else {
                n = int(pow(n, 0.5));
            }
        }
        
        sequence.push_back(1);
        
        return sequence;
    }
};
