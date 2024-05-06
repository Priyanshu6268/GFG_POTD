vector<int> reverseLevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    
    vector<int> ans;
    
    while (!q.empty()) {
        Node* temp = q.front();
        
        if (temp == NULL) {
            q.pop();
            if (!q.empty()) q.push(NULL);
        } else {
            q.pop();
            ans.push_back(temp->data);
            if (temp->right) q.push(temp->right);
            if (temp->left) q.push(temp->left);
        }
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}
