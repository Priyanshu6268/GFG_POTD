#include<algorithm>
// Solution class with quickSort function
class Solution {
  public:
    struct Node* quickSort(struct Node* head) {
        // code here
        if(!head)
        return head;
        int i=0;
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        while(temp!=NULL){
            temp->data=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
        
    }
};
