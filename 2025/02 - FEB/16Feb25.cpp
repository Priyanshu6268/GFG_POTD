class Solution {
  public:
  vector<int>vec;
  void Solve(Node* root){
      if(root==NULL)
      return;
      Solve(root->left);
      vec.push_back(root->data);
      Solve(root->right);
  }
    // Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) {
        Solve(root);
        return vec;
    }
Node* func(vector<int>&arr,int s,int e){
    if(s>e)
    return NULL;
    int mid=(s+e)/2;
    Node* root=new Node(arr[mid]);
    root->left=func(arr,s,mid-1);
    root->right=func(arr,mid+1,e);
    return root;
}
    // Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &arr) {
        // Your code here
        return func(arr,0,arr.size()-1);
    }
};
