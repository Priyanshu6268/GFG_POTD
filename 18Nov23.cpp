class Solution {
public:
    Node* reverseDLL(Node* head) {
        Node* curr = head;

        while (curr) {
            head = curr;
            Node* prev = curr->prev;
            curr->prev = curr->next;
            curr->next = prev;
            curr = curr->prev;
        }

        return head;
    }
};
