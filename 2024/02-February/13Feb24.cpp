//User function Template for C++

// struct Node {
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };

class Solution {
public:
    Node* cloneGraph(Node* src) {
       map<Node*, Node*> m;
    queue<Node*> q;
    q.push(src);

    Node* node = new Node();
    node->val = src->val;
    m[src] = node;

    while (!q.empty()) {
        Node* u = q.front();
        q.pop();

        vector<Node*> v = u->neighbors;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            if (m[v[i]] == nullptr) {
                node = new Node();
                node->val = v[i]->val;
                m[v[i]] = node;
                q.push(v[i]);
            }
            m[u]->neighbors.push_back(m[v[i]]);
        }
    }

    return m[src];
    }
};
