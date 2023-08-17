//User function template for C++
class Solution{
public:
vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    int i,j=0,k=0;
	    vector<int>v;
	    for(i=0;i<n;i++){
	        if(num[i]==9) j++;
	    }
	    if(j==n){
	        for(i=0;i<=n;i++){
	       if(i%n==0) v.push_back(1);
	       else v.push_back(0);
	       
	    }return v;
	    }else{
	        j=0;
	        for(i=(n+1)/2;i<n;i++){
	            if(num[i]==num[n-1-i]) k++;
	             if(num[i]>num[n-1-i]) {
	                 j=1;
	                 break;
	             }
	             if(num[i]<num[n-1-i]) {
	                 
	                 break;
	             }
	        }
	        if(j!=1&&k!=n/2){
	             for(i=(n+1)/2;i<n;i++){
	            num[i]=num[n-1-i];
	            
	        }
	        }else{
	            k=1;
	            for(i=(n-1)/2;i>=0;i--){
	                num[i]+=k;
	                if(num[i]==10){
	                    num[i]=0;
	                k=1;}
	                else k=0;
	                
	            }
	              for(i=(n+1)/2;i<n;i++){
	            num[i]=num[n-1-i];
	            
	        }
	            
	        }
	    }
	     for(i=0;i<n;i++){
	       
	        v.push_back(num[i]);
	       
	    }return v;
	}


};
