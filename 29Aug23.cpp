class Solution
{
    public:
    Node *solve(Node *curr){
        if(!curr)
            return curr;
        
        Node* last = solve(curr->next);
        
        if(last){
            if(last -> data <= curr -> data)
                curr->next = last;
            else
                return last;
        }else
            curr->next = last;
        
        return curr;
    }
    
    Node *compute(Node *head)
    {
        return solve(head);
    }
};
