class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
       Node* prev  = NULL;
       while(del_node && del_node->next){
           swap(del_node->data, del_node->next->data);
           prev = del_node;
           del_node = del_node->next;
       }
       prev->next = 0;
    }

};
