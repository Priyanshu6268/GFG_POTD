class Solution {
  public:

    void find(Node* root, int n, int &ans){
        if(!root) return;
        
        if(root->key == n){
            ans = n;
            return;
        }
        
        if(root->key < n){
            ans = root->key;
            find(root->right,n,ans);
        }
        else{
            find(root->left,n,ans);
        }
    }
    
    int findMaxForN(Node* root, int n) {
        // code here
        int ans=-1;
        find(root,n,ans);
        return ans;
    }
};
