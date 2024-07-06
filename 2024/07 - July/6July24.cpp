class Solution {
  public:
    vector<Node *>temp;
    void inorder(Node *num){
        if (num == NULL)return;
        inorder(num->left);
        temp.push_back(num);
        inorder(num->right);
    }
    void populateNext(Node *root) {
        // code here
        inorder(root);
        int i, n= temp.size();
        for(i=0; i<n-1; i++){
            temp[i]->next = temp[i+1];
        }
        
    }
};
