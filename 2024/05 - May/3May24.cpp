class Solution {
public:
    vector<int> Kdistance(struct Node *root, int k) {
        queue<Node*> q;
        q.push(root);
        
        for(int i = 0; i < k && !q.empty(); i++) {
            int n = q.size();
            
            while(n--) {
                Node* f = q.front();
                q.pop();
                
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        
        vector<int> ans;
        while(!q.empty()) {
            Node* f = q.front();
            q.pop();
            
            ans.push_back(f->data);
        }
        
        return ans;
    }
};
