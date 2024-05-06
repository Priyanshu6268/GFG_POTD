vector<int> noSibling(Node* root)
{
    // code here
    queue<pair<Node*,int>>q ;
    q.push({root , 0}) ;
    vector<int>ans ;
    while(!q.empty()){
        int size=q.size() ;
        for(int i=0;i<size;i++){
            Node*node = q.front().first ;
            int level= q.front().second ;
            q.pop() ;
            bool left_null = false ;
            bool right_null=false ;
            if(node->left)q.push({node->left,level+1}) ;
            else left_null= true ;
            if(node->right)q.push({node->right,level+1}) ;
            else right_null=true ;
            if(left_null==true and right_null==true)continue ;
            else{
                if(left_null)ans.push_back(node->right->data) ;
                if(right_null)ans.push_back(node->left->data) ;
            }
        }
    }
    sort(ans.begin() , ans.end()) ;
    if(ans.size())return ans ;
    return {-1} ;
}
