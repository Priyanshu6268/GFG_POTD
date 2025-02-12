class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int &k) {
        // add code here.
        int val = -1;
        if( !root ) return val;
        if( ( val = kthSmallest( root->left, k ) ) != -1 ) return val;
        if( --k == 0 ) return root->data;
        if( ( val = kthSmallest( root->right, k ) ) != -1 ) return val;
        return val;
    }
};
