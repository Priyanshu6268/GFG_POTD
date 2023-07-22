class Solution {
public:
    Node *removeDuplicates(Node *head) {
        unordered_map<int, bool> isDup;
        Node* itr = head;
        Node* skipItr;

        while (itr) {
            isDup[itr->data] = true;
            skipItr = itr->next;

            while (skipItr && isDup.find(skipItr->data) != isDup.end())
                skipItr = skipItr->next;

            itr->next = skipItr;
            itr = skipItr;
        }

        return head;
    }
};
