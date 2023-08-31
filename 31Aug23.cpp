int height(struct Node* node) {
    if (node == NULL) 
        return 0;

    return node->height;
}

int getBalanceFactor(struct Node* node) {
    if (node == NULL) 
        return 0;
        
    return height(node->left) - height(node->right);
}

struct Node* leftRotate(struct Node* root) {
    struct Node* newMid = root->right;
    struct Node* temp = newMid->left;

    newMid->left = root;
    root->right = temp;

    root->height = max(height(root->left), height(root->right)) + 1;
    newMid->height = max(height(newMid->left), height(newMid->right)) + 1;

    return newMid;
}

struct Node* rightRotate(struct Node* root) {
    struct Node* newMid = root->left;
    struct Node* temp = newMid->right;

    newMid->right = root;
    root->left = temp;

    root->height = max(height(root->left), height(root->right)) + 1;
    newMid->height = max(height(newMid->left), height(newMid->right)) + 1;

    return newMid;
}

struct Node* successorInorder(struct Node* root) {
    struct Node* curr = root;
    while (curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

struct Node* deleteNode(struct Node* root, int data) {
    if (!root) 
        return root;

    if (data < root->data) 
        root->left = deleteNode(root->left, data);
        
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
        
    else {
        if (root->left == NULL && root->right == NULL) 
            return NULL;
        else if (root->left == NULL) 
            return root->right;
        else if (root->right == NULL) 
            return root->left;
        

        struct Node* successor = successorInorder(root->right);
        root->data = successor->data;
        root->right = deleteNode(root->right, successor->data);
    }

    if (!root) 
        return root;

    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalanceFactor(root);

    if (balance <= 1 && balance >= -1)
        return root;

    if (balance > 1 && getBalanceFactor(root->left) >= 0)
        return rightRotate(root);

    if (balance > 1 && getBalanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalanceFactor(root->right) <= 0) 
        return leftRotate(root);

    if (balance < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
}
