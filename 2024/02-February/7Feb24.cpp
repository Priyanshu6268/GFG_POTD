class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
     int findDist(Node* root, int a, int b) {
        Node* lcaNode = findLCA(root, a, b);
        int distanceA = findDistance(lcaNode, a, 0);
        int distanceB = findDistance(lcaNode, b, 0);
        return distanceA + distanceB;
    }

private:
    Node* findLCA(Node* root, int a, int b) {
        if (root == nullptr || root->data == a || root->data == b) {
            return root;
        }

        Node* leftLCA = findLCA(root->left, a, b);
        Node* rightLCA = findLCA(root->right, a, b);

        if (leftLCA && rightLCA) {
            return root;
        }

        return (leftLCA != nullptr) ? leftLCA : rightLCA;
    }

    int findDistance(Node* root, int target, int distance) {
        if (root == nullptr) {
            return -1;
        }

        if (root->data == target) {
            return distance;
        }

        int leftDistance = findDistance(root->left, target, distance + 1);
        int rightDistance = findDistance(root->right, target, distance + 1);

        return (leftDistance != -1) ? leftDistance : rightDistance;
    }
};
