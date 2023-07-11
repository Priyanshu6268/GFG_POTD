class Solution

{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int rl=0,ru=n-1,cu=m-1,cl=0,cnt=0;
 		while(cnt != n*m){
 		   for(int i=cl;i<=cu;i++){
 		       cnt++;
 		       if(cnt==k)return a[rl][i];
 		   } 
 		   rl++;
 		   for(int i=rl;i<=ru;i++){
 		       cnt++;
 		       if(cnt==k)return a[i][cu];
 		   } 
 		   cu--;
 		   for(int i=cu;i>=cl;i--){
 		       cnt++;
 		       if(cnt==k)return a[ru][i];
 		   } 
 		   ru--;
 		    for(int i=ru;i>=rl;i--){
 		       cnt++;
 		       if(cnt==k)return a[i][cl];
 		   } 
 		   cl++;
 		}
    }
};
