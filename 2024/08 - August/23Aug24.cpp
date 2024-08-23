vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int n=q.size();
        ans.push_back(q.front()->data);
        
        while(n--){
            auto x=q.front();
            q.pop();
            
            if(x->left)
                q.push(x->left);
            if(x->right)
                q.push(x->right);
        }
    }
    return ans;
}
