class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        
        if (!root) {
            return 0;
        }
        
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        
        int mini = 0, maxi = 0;
        
        while (!q.empty()) {
            pair<Node *, int> front = q.front();
            q.pop();
            
            Node *node = front.first;
            int dist = front.second;
            
            mini = min(dist, mini);
            maxi = max(dist, maxi);
            
            if (node->left) {
                q.push({node->left, dist - 1});
            }
            
            if (node->right) {
                q.push({node->right, dist + 1});
            }
        }
        
        return maxi - mini + 1;
    }
};
