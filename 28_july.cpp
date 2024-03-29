//Function to find the lowest common ancestor in a BST.
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // BST property -> left <= node <= right
            Node* lca = root;
            if(n1 > n2) swap(n1, n2);
            
            while(n1 > lca->data || n2 < lca->data) {
                if(n1 > lca->data)
                    lca = lca->right;
                else 
                    lca = lca->left;
            }
            return lca;
        }

};
