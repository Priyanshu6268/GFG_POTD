class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        Node *curr = *head;
        int n = 0;
        while(curr) curr = curr -> next, n++;
        return !(n&1);
    }
};
