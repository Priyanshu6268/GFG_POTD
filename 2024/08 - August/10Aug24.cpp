class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        int len=0;
        Node* temp=head;
        while(temp) len++,temp=temp->next;
        if(k%len==0) return head;
        temp=head;
        while(--k && temp) temp=temp->next;
        Node* ntemp=temp->next;
        Node* nntemp=ntemp;
        temp->next=NULL;
        while(nntemp->next) nntemp=nntemp->next;
        nntemp->next=head;
        return ntemp;
    }
};
