class Solution {
  public:
    vector<int> findSpiral(Node* root) {
        vector<int>ans;
        vector<vector<int>>temp;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>t;
            for(int i=0;i<s;i++){
                Node*a=q.front();
                q.pop();
                t.push_back(a->data);
                if(a->left){
                    q.push(a->left);
                }
                if(a->right){
                    q.push(a->right);
                }
            }
            temp.push_back(t);
        }
        for(int i=0;i<temp.size();i++){
            if(i%2==0){
                for(int j=temp[i].size()-1;j>=0;j--){
                    ans.push_back(temp[i][j]);
                }
            }
            else{
                for(int j=0;j<temp[i].size();j++){
                    ans.push_back(temp[i][j]);
                }
            }
        }
        return ans;
    }
};

