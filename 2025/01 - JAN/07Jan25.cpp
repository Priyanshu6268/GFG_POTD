class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int n = arr.size();
        int i=0,j=n-1,a=0;
        while(i<=j){
            int x = arr[i]+arr[j];
            if(x==target && arr[i]==arr[j]){
                int m = (j-i);
                int m1 = m+1;
                if(m%2==0)m=m/2;
                else m1=m1/2;
                a+=m*m1;
                break;
            }else if(x==target){
                int l=0,r=0,lv=arr[i],rv=arr[j];
                while(i<=j && arr[i]==lv){
                    l++;
                    i++;
                }
                while(i<=j && arr[j]==rv){
                    r++;
                    j--;
                }
                a+=l*r;
            }else if(x>target)j--;
            else i++;
        }
        return a;
    }
};
