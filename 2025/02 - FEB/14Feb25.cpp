class Solution {
  public:
    void inOrder(Node *root, vector<Node*> &v){
        if(root == NULL) return;
        if(root!=NULL){
            inOrder(root->left, v);
            v.push_back(root);
            inOrder(root->right, v);
        }
    }
    
    
    void swapNodes(Node* root, Node* &sw1, Node* &sw2){
        int temp;
        temp = sw1->data;
        sw1->data = sw2->data;
        sw2->data = temp;
    }
    void correctBST(Node* root) {
        // add code here.
        vector<Node*> inorder;
        inOrder(root, inorder);
        Node *tmp,*prev,*sw1,*sw2;
        prev = inorder.front();
        sw1 = NULL;
        sw1 = NULL;
        

        for(auto i = inorder.begin()+1; i!= inorder.end(); i++){
            tmp = *i;
            if(tmp->data<prev->data && sw1==NULL) sw1 = prev;
            if(tmp->data<prev->data && sw1 != NULL) sw2 = tmp;
            prev = tmp;
        }
        swapNodes(root,sw1,sw2);
    }
};
