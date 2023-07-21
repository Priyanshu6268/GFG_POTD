/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        //edge cases
        if(head==NULL || !head->next) return head;
        
        node* rd=NULL;
        node *temp=head;
        for(int i=0;temp && i<k; i++){
            temp=temp->next;
        }
        
        rd=reverse(temp,k);
        
        node* prev=rd;
        node* cur=head;
        node* nex=head->next;
        
        while(nex!=temp){
            cur->next=prev;
            prev=cur;
            cur=nex;
            nex=nex->next;
        }
        
        cur->next=prev;
        return cur;
    }
};
