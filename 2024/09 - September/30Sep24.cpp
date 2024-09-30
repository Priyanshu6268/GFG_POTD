class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inorderroot(Node *root,multiset<int> &s)
    {
        if(root!=NULL)
        {
            inorderroot(root->left,s);
            s.insert(root->data);
            inorderroot(root->right,s);
        }
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        multiset<int> s;
        inorderroot(root1, s);
        inorderroot(root2, s);
        vector<int> res(s.begin(),s.end());
        return res;
    }
};
