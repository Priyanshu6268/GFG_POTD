/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       if(root==NULL)return ans;
       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
           int t = q.size();
           int f;
           while(t--){
               auto x = q.front();
               q.pop();
               f = x->data;
               if(x->left)q.push(x->left);
               if(x->right)q.push(x->right);
           }
           ans.push_back(f);
       }
       return ans;
    }
};
