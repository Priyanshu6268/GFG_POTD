class Solution {
    private:
        void bst(Node* &root,vector<int> &ans){
        if(root==NULL) return;
        bst(root->left,ans);
        ans.push_back(root->data);
        bst(root->right,ans);
        return;
    }
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> ans;
        bst(root1,ans);
        bst(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
