//User function template for C++

/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>v;
        inorder(root,v);
        int k=0;
        sort(v.begin(),v.end());
        update(v,k,root);
        return root;
    }
    void inorder(Node* r,vector<int>&v){
        if(!r)
            return ;
        inorder(r->left,v);
        v.push_back(r->data);
        inorder(r->right,v);
    }
    void update(vector<int>&v,int&k,Node* r){
        if(!r )
            return ;
        update(v,k,r->left);
        r->data=v[k];
        k=k+1;
        update(v,k,r->right);
    }
};
