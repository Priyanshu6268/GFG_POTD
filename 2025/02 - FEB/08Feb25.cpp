class Solution {
    private:
        void lefty(Node* root, vector<int> &v) {
            if (!root) return;
            if (root->left == NULL && root->right == NULL) return;
            
            v.push_back(root->data);
            lefty(root->left,v);
            if (root->left == NULL) lefty(root->right,v);
        }
        void leafy(Node* root,vector<int>&v) {
            if (!root)  return;
            if (root->left == NULL&&root->right == NULL) v.push_back(root->data);
            leafy(root->left,v);
            leafy(root->right,v);
        }
        void righty(Node* root, vector<int>&v) {
            if (!root) return;
            if (root->left == NULL && root->right == NULL) return;
            
            righty(root->right,v);
            if (root->right == NULL) righty(root->left,v);
            v.push_back(root->data);
            

        }
  public:
    vector<int> boundaryTraversal(Node *root) {
        vector<int> v;
        v.push_back(root->data);
        lefty(root->left,v);
        leafy(root->left,v);
        leafy(root->right,v);
        righty(root->right,v);
        return v;
    }
};
