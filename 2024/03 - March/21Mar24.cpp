class Solution{
    public:
    
    vector <int> zigZagTraversal(Node* root)
    {
        
        vector<int> ans;
        queue<Node*> q;
        int level = 0;
        q.push(root);
        
        while(!q.empty()){
            
            level++;
            vector<int> temp;
            
            int n = q.size();
            
            for(int i=0; i<n; i++){
                
                Node* elem = q.front();
                q.pop();
                
                temp.push_back(elem->data);
                
                if(elem->left) q.push(elem->left);
                if(elem->right) q.push(elem->right);
                
            }
            
            // If the level is even then reverse the temp vector
            if(level % 2 == 0) reverse(temp.begin(), temp.end());
            
            // Push all the elements of temp to ans vector
            for(auto element : temp){
                
                ans.push_back(element);
                
            }
            
        }
        
        return ans;
        
    }
};
