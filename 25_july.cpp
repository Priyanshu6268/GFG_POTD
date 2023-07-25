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


//Function to return a list containing the level order traversal in spiral form.
void printk(Node *root, int k, vector<int> &v){
    if(!root) return;
    
    if(k == 0){
        v.push_back(root -> data);
    }
    else{
        printk(root -> left, k - 1, v);
        printk(root -> right, k - 1, v);
    }
    
}

int height(Node *root){
    if(!root) return 0;
    
    return (1 + max(height(root -> left), height(root -> right)));
}

vector<int> findSpiral(Node *root)
{
    vector<int> res;
    
    for(int i = 0; i < height(root); i++){
        vector<int> ans;
        printk(root, i, ans);
        if(i % 2 == 0){
            reverse(ans.begin(), ans.end());
        }
        res.insert(res.end(), ans.begin(), ans.end());
        ans.clear();
    }
    return res;
}
