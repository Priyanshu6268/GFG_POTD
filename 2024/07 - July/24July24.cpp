class Solution
{
public:
    int prev = INT_MIN;
    bool isBST(Node *root)
    {
        return !root ? true : isBST(root->left) and (prev < root->data) and (prev = root->data) and isBST(root->right);
    }
};
