void path(Node*root,vector<int>v,vector<vector<int>>&ans,bool flag){
     if(root==NULL){
         return;
     }
     
     v.push_back(root->data);
     
     path(root->left,v,ans,flag);
     path(root->right,v,ans,flag);
     if(root->right == NULL && root->left == NULL) ans.push_back(v);
     v.pop_back();
 }
class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
        // Code here
    vector<vector<int>>ans;
    vector<int>v;
    path(root,v,ans,1);
    
    return ans;

    }
};
