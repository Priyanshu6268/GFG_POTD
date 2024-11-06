class Solution {
  public:
    int treePathsSum(Node *root) {
        // code here.
        int x = root->data;
        
        return travrese(root->left, x*10) + travrese(root->right, x*10);
    }
    
    int travrese(Node* rt, int x)
    {
        if(rt == NULL) return 0;
        
        x += rt->data;
        if(rt->left == rt->right)
            return x;
        
        return travrese(rt->left, x*10) + travrese(rt->right, x*10);
    }
};
