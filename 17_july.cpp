class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		      map<char,long long int>freq;
            queue<char> q;
            string s = "";
            for(int i = 0; i < A.size(); i++)
            {
                if(freq[A[i]] == 0) q.push(A[i]);
                freq[A[i]]++;
                while(freq[q.front()]>1 && !q.empty())
                {
                    q.pop();
                }
                if(q.empty()) s+='#';
                else s+= q.front();
            }
            return s;
		}

};
