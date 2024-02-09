/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
   int isSumProperty(Node *root)
    {
     // Add your code here
     if((root==NULL)||(root->left==NULL&&root->right==NULL))return 1;
     int left,right;
     if(root->left)left=root->left->data;else left=0;
     if(root->right)right=root->right->data;else right=0;
     int sum=left+right;
     if(sum!=root->data) return 0;
     if(isSumProperty(root->left)==1&&isSumProperty(root->right)==1)return 1;return 0;
     
    }
};
