class Solution {
  public:
    // function to sort a k sorted doubly linked list
    DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        if (!head) return head;

        priority_queue<int, vector<int>, greater<int>> minHeap;
        DLLNode *newHead = NULL, *sortedTail = NULL, *current = head;

        for (int i = 0; i <= k && current; ++i) {
            minHeap.push(current->data);
            current = current->next;
        }

        while (!minHeap.empty()) {
            int minValue = minHeap.top();
            minHeap.pop();

            if (!newHead) {
                newHead = new DLLNode(minValue);
                sortedTail = newHead;
            } else {
                sortedTail->next = new DLLNode(minValue);
                sortedTail->next->prev = sortedTail;
                sortedTail = sortedTail->next;
            }

            if (current) {
                minHeap.push(current->data);
                current = current->next;
            }
        }

        return newHead;
    }
};
