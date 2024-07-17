class Solution {
public:
    Node* createTree(vector<int>& parent) {
        int n = parent.size();
        vector<Node*> created(n, NULL);
        Node* root = NULL;

        for (int i = 0; i < n; ++i) {
            if (!created[i]) {
                createNode(parent, i, created, root);
            }
        }

        return root;
    }

private:
    void createNode(vector<int>& parent, int i, vector<Node*>& created, Node*& root) {
        if (created[i]) return;

        created[i] = new Node(i);

        if (parent[i] == -1) {
            root = created[i];
            return;
        }

        if (!created[parent[i]]) {
            createNode(parent, parent[i], created, root);
        }

        Node* p = created[parent[i]];
        if (!p->left) {
            p->left = created[i];
        } else {
            p->right = created[i];
        }
    }
};
