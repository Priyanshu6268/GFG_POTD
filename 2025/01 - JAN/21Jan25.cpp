class Solution {
  public:
    Node* reverseList(struct Node* head) {
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    Node *reverseKGroup(Node *head, int k) {
        Node* dummy=new Node(-1);
        Node* it=dummy;
        Node* temp=head;
        Node* start=head;
        int i=0;
        while(temp!=NULL){
            i++;
            if(i==k ||temp->next==NULL){
                i=0;
                Node* forward=temp->next;
                temp->next=NULL;
                it->next=reverseList(start);
                while(it->next!=NULL){
                    it=it->next;
                }
                start=forward;
                temp=forward;
            }
            else{
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};
