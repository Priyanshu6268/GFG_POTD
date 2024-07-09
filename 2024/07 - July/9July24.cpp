class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
       sort(arr.begin(),arr.end());
       int ans=0;
       
       for(int i=0;i<arr.size();i++){
           
           int l=i+1;
           int h=arr.size()-1;
           int ele=arr[i];
           
           while(l<h){
               
               int sum=ele+arr[l]+arr[h];
               
               if(sum==target)
               return sum;
               
               else if(sum>target){
                   if(ans==0)
                   ans=sum-target;
                   else if(sum-target<=abs(ans))
                   ans=sum-target;
                   h--;
               }
               else{
                   if(ans==0)
                   ans=sum-target;
                   else if(abs(sum-target)<abs(ans))
                   ans=sum-target;
                   l++;
               }
           }
           
       }
       return target+ans;
    }
};
