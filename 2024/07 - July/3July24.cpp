class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        map<int,int>mp;
        Node *temp=head;
        while(temp!=NULL){
            mp[temp->data]++;
            temp=temp->next;
        }
        Node *newHead=NULL;
        for(auto x:mp){
            if(x.second<=1){
                if(newHead==NULL){
                    Node *newNode=new Node(x.first);
                    newHead=newNode;
                    head=newHead;
                }
                else{
                    Node *newNode=new Node(x.first);
                     head->next=newNode;
                     head=newNode;
                }
                
            }
        }
        return newHead;
    }
};
