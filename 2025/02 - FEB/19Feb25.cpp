class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<arr.size();i++){
            Node* curr = arr[i];
            while(curr){
                pq.push(curr->data),curr = curr->next;
            }
        }
        Node* root = new Node(pq.top());
        pq.pop();
        Node * curr = root;
        while(pq.empty()== false){
            curr->next = new Node(pq.top());
            pq.pop();
            curr = curr->next;
        }
        return root;
    }
};
