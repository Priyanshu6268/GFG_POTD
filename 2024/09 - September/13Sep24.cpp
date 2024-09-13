class Solution {
  public:
    void solve(Node* root){
        if(root == NULL){
            return;
        }
        
        solve(root->left);
        solve(root->right);
        
        swap(root->left,root->right);
    }
    void mirror(Node* node) {
        solve(node);
    }
};
