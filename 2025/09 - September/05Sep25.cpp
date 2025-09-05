class Solution {
  public:
    Node* split(Node* p, int val) {
        Node* q = p;
        while(p) {
            if (p->data == val) {
                swap(p->data, q->data);
                q = q->next;
            }
            p = p->next;
        }
        return q;
    }
    Node* segregate(Node* head) {
        split(split(head, 0), 1);
        return head;
    }
};
