class Solution {
  public:
    // Function to find the height of a binary tree.
    int solve(Node* node){
       if(!node) return 0; 
       int left =   solve(node->left); 
       int right =   solve(node->right); 
       return max(left,right)+1; 
    }
    int height(Node* node) {
       int ans  =  solve(node); 
       if(ans>0) return ans-1; 
       else return 0; 
    }
};
