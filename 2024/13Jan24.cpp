class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        vector<int>ans;
        Node* temp=head_ref;
        while (temp!=nullptr)
        {
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(), ans.end());
        temp=head_ref;
        int i=0;
        while (temp!=nullptr)
        {
            temp->data=ans[i];
            i++;
            temp=temp->next;
        }
        return head_ref;
    }
    
};
