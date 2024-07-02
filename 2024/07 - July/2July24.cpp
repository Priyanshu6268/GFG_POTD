class Solution {
  public:
   bool compute(Node* root)
{
   
 string str="";
   int i=0;
   Node* temp=root;
   while(temp!=NULL){
      str+=temp->data;
      temp=temp->next;
   }
   int n=str.size();
   while(i<=n/2){
       if(str[i]!=str[n-i-1]){
           return false;
           
       }
      else{
          i++;
      }
   }
   return true;
   
}
};
