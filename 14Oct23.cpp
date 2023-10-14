class Solution
{
    public:
    int first;
    unordered_set<int> set;
    vector<int> ans;
    void traverse(Node* root){
        if(root==NULL){
            return;
        }
        traverse(root->left);
        if(first==1){
            set.insert(root->data);
        }else{
            if(set.count(root->data)){
                ans.push_back(root->data);
            }
        }
        
        traverse(root->right);
    }
    
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     first=1;
     traverse(root1);
     first=0;
     traverse(root2);
     return ans;
    }
};
