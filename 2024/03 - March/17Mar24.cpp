class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int k) {
        // Code here
        int count = 0 ; 
        
        struct Node *curr1 = head1 ; 
        struct Node *curr2 = head2 ; 
        
        unordered_map<int, int>mp ; 
        
        while(curr2!=NULL){
            mp[curr2->data]++ ;
            curr2 = curr2->next ;
            
        }
        
        while(curr1!=NULL){
          if(mp[k-(curr1->data)]>=1){
              count+=mp[k-(curr1->data)] ; 
              curr1 = curr1->next ; 
              
          }
          
          else {
              curr1 = curr1->next ;
          }
        }
        
        return count ; 
    }
};
