class Solution {
  public:
    Node * reverse(Node * head)
    {
        Node * res = head;
        Node * temp = head->next;
        res->next = NULL;
        while(temp)
        {
            Node * tmp = temp;
            temp = temp->next;
            tmp->next = res;
            res = tmp;
        }
        return res;
    }
    bool isPalindrome(Node *head) {
        if(!(head->next))
        return true;
        int n=0;
        Node * temp = head;
        while(temp)
        {
            temp = temp->next;
            n++;
        }
        temp = head;
        for(int i=0;i<(n-1)/2;i++)
        temp = temp->next;
        temp->next = reverse(temp->next);
        
        temp = temp->next;
        while(temp)
        {
            if(temp->data != head->data)
            return false;
            temp = temp->next;
            head = head->next;
        }
        return true;
    }
};
