class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(!head->next)
            return head;

        struct Node* itr = head;
        head = head->next;
        itr->next = head->next;
        head->next = itr;
        while(itr){
            struct Node* curr = itr->next;
            if(curr && curr->next){
                itr->next = curr->next;
                curr->next = itr->next->next;
                itr->next->next = curr;
            }else
                break;
            itr = itr->next->next;
        }
        return head;
    }
};
