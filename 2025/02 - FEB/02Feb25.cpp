class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>num;
            while(n--){
                Node *temp=q.front();
                q.pop();
                num.push_back(temp->data);
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            ans.push_back(num);
        }
        return ans;
    }
};
