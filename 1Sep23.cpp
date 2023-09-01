class Solution {
public:
    void printCorner(Node *root) {
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            int sz = q.size();
            Node* first = q.front();
            Node* last;
            
            while (sz--) {
                last = q.front();
                q.pop();
                if (last->left)
                    q.push(last->left);
                if (last->right)
                    q.push(last->right);
            }
            
            if (first != last)
                cout << first->data << " " << last->data << " ";
            else
                cout << first->data << " ";
        }
    }
};
