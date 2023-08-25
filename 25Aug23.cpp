//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    int j=s.length()-1,i=0;
	    while(s[i]==s[j]){
	        i++;j--;
	    }
	    if(i<j) return 0;
	    else return 1;
	}

};
