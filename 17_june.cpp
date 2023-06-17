//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
     unordered_map<int,int>m;
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
       
        while(!q.empty()){
            int x=q.front();
            q.pop();
            m[x]++;
        }
        for(auto i:m){
            if(i.first==k)
             return i.second;
        }
        return -1;
    }
    
};
