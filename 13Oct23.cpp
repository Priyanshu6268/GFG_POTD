class Solution{

public:
    int floor(Node* root, int x) {
        // Code here
        int floorValue = -1;

        while (root != nullptr)
        {
            if (root->data == x)
            {
                return x;
            } 
            else if (root->data < x)
            {
                floorValue = root->data;
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }

        return floorValue;
    }
};
