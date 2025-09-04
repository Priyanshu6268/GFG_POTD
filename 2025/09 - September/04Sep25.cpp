class Solution {
  public:
  vector<int>solve(Node* head) {
    vector<int> arr;
    Node* curr = head;

    while (curr != nullptr) {
        arr.push_back(curr->data);
        curr = curr->next;
    }

    return arr;
}
    Node *reverseKGroup(Node *head, int k) {
        // code here
        vector<int>temp=solve(head);
        int i=0;
        int n=temp.size();
        while(i<temp.size()){
            if(i+k>n){
                reverse(temp.begin()+i,temp.end());
            }
            else{
            reverse(temp.begin()+i,temp.begin()+i+k);}
            i+=k;
        }
        Node* ans=new Node(0);
        Node* te=ans;
        for(int i=0;i<temp.size();i++){
            Node* v=new Node(temp[i]);
            te->next=v;
            te=te->next;
            
            
        }
        return ans->next;
    }
};

