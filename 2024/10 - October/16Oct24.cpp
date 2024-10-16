class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        // code here.
        int i = 2 ;
        int st = 0 ;
        int ed = arr.size() ;
        bool flag = false ;
        while (i--) {
        for (int j = 0 ; j < arr.size() - 1 ; j++) {
            if(arr[j] > arr[j+1] ) {
                flag = true ;
                break ;
            }
        }
        if(flag)
            swap(arr[st],arr[ed]) ;
            st++ ;
            ed-- ;
            flag = false ;
        }
        for (int j = 0 ; j < arr.size() - 1 ; j++) {
            if(arr[j] > arr[j+1] ) {
                return false ;
            }
        }
        return true ;
    }
};
