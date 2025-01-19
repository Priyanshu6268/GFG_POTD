//    https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1
class Solution {
public:
      Node* rotate(Node* head, int k) {
        // Your code here
        if(head->next == nullptr){
            return head;
        }
        int size = 0;
        Node* curr = head;
        
        while(curr){
            size++;
            curr = curr->next;
        }
        int rem = k % size;
        if(rem == 0){
            return head;
        }
        curr = head;
        Node* p = head;
        Node* prev = nullptr;
        
        while(rem > 0){
            prev = curr;
            curr = curr->next;
            rem--;
        }
        prev->next = nullptr;
        Node* ptr = curr;
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = p;
        return curr;
    }
};
