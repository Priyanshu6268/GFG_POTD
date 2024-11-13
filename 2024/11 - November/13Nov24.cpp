class Solution {
  public:
    int intersectPoint(Node* head1, Node* head2) {
        Node* ptr1 = head1, *ptr2 = head2;
        bool round1 = false, round2 = false;
        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1 == ptr2){
                return ptr1->data;
            }
            
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            
            if(round1 == false && ptr1 == NULL){
                round1 = true;
                ptr1 = head2;
            }
            if(round2 == false && ptr2 == NULL){
                round2 = true;
                ptr2 = head1;
            }
        }
        return -1;
    }
};
