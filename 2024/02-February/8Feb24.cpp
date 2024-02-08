/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    int depth(Node * root){
        if(root == NULL) return 0;
        
        return 1 + max(depth(root->right), depth(root->left));
    }
    
    bool checkDepth(int treeDepth, Node * root, int currentDepth){
        if(root == NULL) return true;
        
        if(root->right == NULL && root->left == NULL){
            return currentDepth == treeDepth;
        }
        
        return checkDepth(treeDepth, root->left, currentDepth + 1) && checkDepth(treeDepth, root->right, currentDepth + 1);
    }
    bool check(Node *root)
    {
        //Your code here
        
        int dep = depth(root);
        
        return checkDepth(dep, root, 1);
    }
};
