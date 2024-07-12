class Solution {
  public:
  bool dfs(Node* root,int k){
      if(!root || k<0) return false;
      
      if(!root->left && !root->right) {
          if(k-root->data ==0) return true;
          return false;
      }
      return dfs(root->left, k-root->data) || dfs(root->right,k-root->data);
  }
  
  
    bool hasPathSum(Node *root, int target) {
        return dfs(root,target);
    }
};
