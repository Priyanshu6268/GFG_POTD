class Solution
{
    public:
    
    struct Node* arrangeCV(Node *head)
    {

        Node* node1=nullptr;
        Node* node2=nullptr;
        Node* head1=nullptr;
        Node* head2=nullptr;
        Node* curr=nullptr;
        Node* curr2=nullptr;

        Node* temp=head;
        while(temp){
            
            if(temp->data=='a' ||temp->data=='e' ||temp->data=='i' ||temp->data=='o' ||temp->data=='u')
            {
                
                 node1=new Node(temp->data);
                if(!head1){
                    head1=node1;
                }
                else{
                    curr->next=node1; 
                }
               
                curr=node1;
                
                
            }
            else{
                
                 node2=new Node(temp->data);
                if(!head2){
                    head2=node2;
                }
                else{
                    curr2->next=node2; 
                }
               
                curr2=node2;

            }

            temp=temp->next;
        }
        
        if (!head1) {
            return head2;
        }
        else
       
        temp=head1;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head2;

        return head1;

    }
};
