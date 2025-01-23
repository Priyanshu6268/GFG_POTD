class Solution 
{
  public:
    Node *cloneLinkedList(Node *head) 
    {
        if(!head)
        {
            return nullptr;
        }
        
        map<Node*,Node*>m;
        
        Node*temp = head;
        
        while(temp)
        {
            m[temp] = new Node(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        while(temp)
        {
            m[temp]->next = m[temp->next];
            m[temp]->random = m[temp->random];
            temp = temp->next;
        }
        
        return m[head];
    }
};
