class Solution {
public:
    vector<int> arr;

    void inorder(Node* node) {
        if (!node)
            return;
        inorder(node->left);
        arr.push_back(node->data);
        inorder(node->right);
    }

    Node* createBST(int low, int high) {
        if (low > high)
            return NULL;

        int mid = (low + high) / 2;
        Node* root = new Node(arr[mid]);

        root->left = createBST(low, mid - 1);
        root->right = createBST(mid + 1, high);

        return root;
    }

    Node* buildBalancedTree(Node* root) {
        inorder(root);
        return createBST(0, arr.size() - 1);
    }
};
