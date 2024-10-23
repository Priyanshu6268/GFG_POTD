class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        
        Node* temp = head  ;
        int c= 0 ;
        while(temp){
            temp = temp -> next;
            c++;
        }
       
        
        int k = abs(c - n);
        
          Node* temp1 = head;
        
        while(k-- && temp1){
            temp1 = temp1 -> next;
        }
        
        int sum = 0 ;
        while(temp1){
            sum += temp1 -> data;
            temp1 = temp1 -> next;
        }
        
        return sum;
    }
};
