class Solution {
    public:
    Node* deleteK(Node *head,int K){
      int i =1;
      Node* temp = head;
      
      if(K==1) return nullptr;
      
      while(temp!=nullptr && temp->next!=nullptr) {
          if(i+1==K) {
              temp->next = temp->next->next;
              i=1;
          }
          else {
              i++;
          }
          temp=temp->next;
      }
      return head;
      
    }
};
