class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      queue<Node*> q;
      vector<int> ans;
      q.push(root);
      while(!q.empty()){
          Node* front = q.front();
          q.pop();
          ans.push_back(front->data);
          if(front->left)
              q.push(front->left);
          if(front->right)
            q.push(front->right);
      }
      return ans;
    }
};
