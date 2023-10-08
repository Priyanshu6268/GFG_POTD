class Solution {
public:
    Node *sortedInsert(struct Node* head, int data) {
        struct Node * newNode =  new Node(data);
        if(head->data >= data){
            newNode->next = head;
            return newNode;
        }
        struct Node * itr = head;
        while(itr->next && itr->next->data < data){
            itr = itr->next;
        }
        newNode->next = itr->next;
        itr->next = newNode;
        return head;
    }
};
