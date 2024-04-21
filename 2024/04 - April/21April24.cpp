class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int x=-1, y=0, z=arr.size();
        while(y<z){
            if(arr[y]<a){
                x++;
                swap(arr[x], arr[y]);
            }else if(arr[y]>b){
                z--;
                swap(arr[z], arr[y]);
            }else{
                y++;
            }
            if(x==y){ // not stuck in infinite loop when x=y
                y++;
            }
        }
        return ;
    }
};
