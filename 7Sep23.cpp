// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
  if(start == end) return 0;
        int visited[100000]{0};
        queue<int> q;
        int count = 0;
        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int num = q.front(); q.pop();
                if(num == end){
                    return count; 
                }
                for(int change : arr){
                    int changedNum = (num * change)%100000;
                    if(!visited[changedNum]){
                        // Here we didn't add the (<= end) condition because
                        // the question is set like if we exceed the end
                        // we will still multipy numbers and when we exceed
                        // 100000 we will do a modulo and come back to something
                        // less than 100000 which can also be less than end or equal
                        visited[changedNum] = 1;
                        q.push(changedNum);
                    }
                }    
            }
            count++;
        }
        return -1;
    }
};
