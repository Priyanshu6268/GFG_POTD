class Solution {
  public:
    Node* findFirstNode(Node* head) {
      
        unordered_set<Node*>st;
     
        Node* temp=head;
        while(temp!=NULL){
            if(st.find(temp)!=st.end()){
              
                return temp;
                break;
            }
            st.insert(temp);
            temp=temp->next;
        
        }
        return NULL;
    }
};
