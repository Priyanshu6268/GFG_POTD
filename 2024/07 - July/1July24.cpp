void convert(Node* head, TreeNode*& root) {
    if (head == nullptr) {
        root = nullptr;
        return;
    }

    root = new TreeNode(head->data);

    queue<TreeNode*> q;
    q.push(root);
    
    head = head->next;

    while (head) {
        TreeNode* current = q.front();
        q.pop();

        // Left 
        current->left = new TreeNode(head->data);
        q.push(current->left);
        head = head->next;
        if (head == nullptr) break;

        // Right 
        current->right = new TreeNode(head->data);
        q.push(current->right);
        head = head->next;
    }
}
