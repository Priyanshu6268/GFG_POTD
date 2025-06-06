class Solution {
  public:
    void pre(Node* root, int key, Node* &pred){
        if(!root)
            return;
        if((root->data) < key){
            pred = root;
            pre(root->right, key, pred);
            return;
        }
        else{
            pre(root->left, key, pred);
            return;            
        }
        return;
    }
    
    void suc(Node* root, int key, Node* &succs){
        if(!root)
            return;
        if(root->data > key){
            succs = root;
            suc(root->left, key, succs);
            return;
        }
        else{
            suc(root->right, key, succs);
            return;
        }
        
        return;
    }
    
  
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pred = NULL;
        Node* succs = NULL;
        
        pre(root, key, pred);
        suc(root, key, succs);
        
        return {pred, succs};
        
    }
};
