class Solution {
  public:
    // Function should return all the ancestor of the target node
    void solve(Node* root, int target, vector<int> & ans,vector<int> &temp){
        if(root==NULL)return;
        if(target == root->data)
        {
            ans = temp;
            return;
        }
        temp.push_back(root->data);
        solve(root->left, target, ans, temp);
        solve(root->right, target, ans, temp);
        temp.pop_back();
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans, temp;
        solve(root, target, ans, temp);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
