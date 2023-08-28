class Solution {
public:
    Node *removeDuplicates(Node *head)
    {
        Node *curr = head;
        while (curr)
        {
            Node *next = curr->next;
            while (next && next->data == curr->data)
                next = next->next;
            curr->next = next;
            curr = curr->next;
        }
        return head;
    }
};
