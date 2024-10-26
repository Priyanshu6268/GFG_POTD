class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int co = 0;
        while(head!=NULL){
            if(head->data == key)
                co++;
            head = head->next;
        }
        return co;
    }
};
