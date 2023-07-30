/*The structure of Node

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

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        Node*ans;
        while(root)
        {
            if(root->data > x->data)
            {
                ans=root;
                root=root->left;
            }
            else
             root=root->right;
        }
        return ans;
    }
};
