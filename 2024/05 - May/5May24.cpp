class Solution{
  public:
    vector <int> verticalSum(Node *root) {
        // add code here.
        map<int,int> mp;
        queue<pair<int,Node*>> q;
        q.push({0,root});
        while(!q.empty()){
            int x = q.front().first;
            Node* node = q.front().second;
            q.pop();
            mp[x] += node->data;
            if(node->left){
                q.push({x-1,node->left});
            }
            if(node->right){
                q.push({x+1,node->right});
            }
        }
        vector<int> ans;
        for(auto &it : mp)
            ans.push_back(it.second);
        return ans;
    }
};
