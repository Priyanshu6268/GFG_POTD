//User function Template for C++

/* Node of the binary search tree 
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution 
{ 
public: 
    void solve(Node* root,Node*&head) 
    { 
        if(root == NULL) 
        return; 
         
        solve(root->right,head); 
         
        root->right = head; 
        head = root; 
         
        solve(root->left,head); 
         
        root->left = NULL; 
    } 
     
    Node *flattenBST(Node *root) 
    { 
        Node* head = NULL; 
        solve(root,head); 
         
        return head; 
    } 
};
