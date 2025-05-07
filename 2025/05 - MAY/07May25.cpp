class Solution {
  public:
    void solve(Node *root,vector<vector<int>> &ans,vector<int> v = {}){
        if(root == NULL){
            ans.push_back(v);
            return;
        }
        
        v.push_back(root->data);
        if(root->left){
            solve(root->left,ans,v);
        }
        if(root->right){
            solve(root->right,ans,v);
        }
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(v);
            return;
        }
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> ans;
        solve(root,ans);
        return ans;
    }
};
