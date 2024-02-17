class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        for(int i=0;(2*i)+1<n;i++){
            int x=arr[i];
            int a=(2*i)+1;
            int y=arr[a];
            int z=-1e9;
            if(a+1<n){
            z=arr[a+1];
            }
            if(x<y||x<z){
                return 0;
            }
        }
        return 1;
    }
};
