class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
          vector<int> sortNum;
        Node* curr=*head;
        Node* temp=curr;
        while(temp!=NULL){
            sortNum.push_back(temp->data);
            temp=temp->next;
        }
        std :: sort(sortNum.begin(),sortNum.end());
        
        for(auto it : sortNum){
            curr->data=it;
            curr=curr->next;
        }
    }
};
