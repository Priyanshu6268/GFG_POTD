class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        Node* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            Node* temp=curr->next;
            curr->next=temp->next;
            curr=temp->next;
            temp->next=nullptr;
            delete temp;
        }
    }

};
