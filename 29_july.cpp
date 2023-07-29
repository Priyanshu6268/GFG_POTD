/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST
void solve(struct Node* root,vector<float>&inorder)
{
    if(root==NULL)
    {
        return;
    }
    solve(root->left,inorder);
    inorder.emplace_back(root->data);
    solve(root->right,inorder);
}
float findMedian(struct Node *root)
{
      //Code here
      vector<float>inorder;
      solve(root,inorder);
      int n = inorder.size();
      if(n%2)
      {
          return inorder[n/2];
      }
      else{
          return (float)(inorder[n/2] + inorder[(n/2)-1])/2;
      }
}
