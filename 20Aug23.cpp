//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int left=0,right=n-1;
	    int cnt=0;
	    while(left<=right)
	    {
	        int mid=(left+right)/2;
	        if(arr[mid]==x)
	        {
	            cnt++;
	            left=mid-1;
	            while(left>= 0 && arr[left]==x)
	            {
	                cnt++;
	                left--;
	            }
	            right=mid+1;
	            while(right<=n-1 && arr[right]==x)
	            {
	                cnt++;
	                right++;
	            }
	            break;
	        }
	        else if(arr[mid]<x)
	        {
	            left=mid+1;
	        }
	        else{
	            right=mid-1;
	        }
	    }
	    return cnt;
	}
};
