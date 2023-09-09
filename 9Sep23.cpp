/*The Node structure is defined as
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
/*The Node structure is defined as
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

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    void helper(Node* root, int &K, int& KthL){
        if(root==NULL) return;
        helper(root->right, K, KthL);
        K--;
        if(K==0){
            KthL=root->data;
        }
        helper(root->left, K, KthL);
    }
    public:
    int kthLargest(Node *root, int K)
    {
        int KthL=-1;
        helper(root,K,KthL);
        return KthL;
        //Your code here
    }
};
