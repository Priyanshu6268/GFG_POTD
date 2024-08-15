class Solution {
  public:
    Node* addOne(Node* head) {
        Node*prev = nullptr;
        Node*curr = head;
        while(curr){
            Node*t = curr->next;
            curr->next = prev;
            prev = curr;
            curr = t;
        }
        
        curr = prev;
        prev = nullptr;
        int carry = 0;
        bool f = true;
        while(curr){
            if(f){
                int sum = curr->data + 1 + carry;
                curr->data = sum%10;
                carry = sum/10;
                f = false;
            }
            else{
                int sum = curr->data + carry;
                curr->data = sum%10;
                carry = sum/10;
            }
            Node*x = curr->next;
            curr->next = prev;
            prev = curr;
            curr = x;
        }
        
        if(carry > 0){
            Node*n = new Node(carry);
            n->next = prev;
            return n;
        }
        else{
            return prev;
        }
    }
};
