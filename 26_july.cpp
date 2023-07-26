//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function
void mark_par(Node* root,unordered_map<Node*,Node*>&mp,Node* &tar,int val){
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* cur = q.front();
        if(cur->data==val){
            tar=cur;
        }
        q.pop();
        if(cur->left){
            q.push(cur->left);
            mp[cur->left]=cur;
        }
        if(cur->right){
            q.push(cur->right);
            mp[cur->right]=cur;
        }
    }
}
int kthAncestor(Node *root, int k, int node)
{
    unordered_map<Node*,Node*> mp;
    Node* target=NULL;
    mark_par(root,mp,target,node);
    queue<Node*> q;
    q.push(target);
    while(k && !q.empty()){
        Node* tmp=q.front();
        q.pop();
        if(mp.find(tmp)!=mp.end()){
            q.push(mp[tmp]);
            k--;
        }
    }
    // cout<<k<<endl;
    if(q.empty()|| k!=0) return -1;
    return q.front()->data;
}
