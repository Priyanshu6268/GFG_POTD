class Solution {
  public:
    int countNodesinLoop(struct Node *head) {
        Node* loop;
        Node *slow=head,*fast=head->next;
        
        while(slow!=fast && fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow!=fast) return 0;
        int count=1;
        if(slow==fast) loop=fast;
        Node* curr=loop->next;
        while(loop!=curr){
            count++;
            curr=curr->next;
        }
        return count;
    }
};
