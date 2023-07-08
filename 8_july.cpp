/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
  
 

bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]<0){
                    j++;
                }
                else if(arr[i]+arr[j]+arr[k]>0){
                    k--;
                }
                else{
                    return 1;
                }
            }
        }
        return 0;
    }
};
