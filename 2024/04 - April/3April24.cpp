class Solution
{
    public:
    
    /*You are required to complete below function */
    void parent(Node* node,Node* par,unordered_map<Node*,Node*>&pare){
        if(!node)return;
        pare[node]=par;
        parent(node->left,node,pare);
        parent(node->right,node,pare);
    }
    Node* solve(Node* root,int &x,int &y){
        if(!root)return NULL;
        if(root->data==x||root->data==y)return root;
        Node* left=solve(root->left,x,y);
        Node* right=solve(root->right,x,y);
        if(left!=NULL&&right!=NULL)return root;
        if(left==NULL)return right;
        return left;
    }
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        // your code goes here
        unordered_map<Node*,Node*>pare;
        parent(root,NULL,pare);
        Node* node=solve(root,x,y);
        k--;
        while(k!=0&&node!=NULL){
            k--;
            node=pare[node];
        }
        if(node==NULL)return -1;
        return node->data;
    }
};
