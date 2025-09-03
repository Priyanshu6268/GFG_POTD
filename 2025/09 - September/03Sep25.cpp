class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
       if(!head)
       return nullptr;
       vector<int>ans;
       Node* curr=head;
       while(curr)
       {
           ans.push_back(curr->data);
           curr=curr->next;
       }
       curr=head;
       for(int i=ans.size()-1;i>=0;i--)
       {
           curr->data=ans[i];
           curr=curr->next;
       }
       return head;
    }
};
