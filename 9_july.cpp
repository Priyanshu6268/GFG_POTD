class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr + n);
        int i = 0;
        while(i < n and arr[i] <= 0){
            i++;
        }
        
        int curr = 1;
        while(i < n){
            if(arr[i] != curr){
                return curr;
            }

            while(i < n and arr[i] == curr){
                i++;
            }
            curr++;
         
        }
        
        return curr;
    } 
};
