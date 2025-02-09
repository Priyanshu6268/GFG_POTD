class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    
    int f(Node* root , int &maxi){
        if(root == NULL) return 0;
        int leftSum = f(root->left , maxi);
        int rightSum = f(root->right , maxi);
        if(leftSum < 0) leftSum = 0;
        if(rightSum <0) rightSum = 0;
        maxi = max(maxi,root->data + leftSum + rightSum);
        return root->data + max(leftSum , rightSum);
    }
    
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int maxi = INT_MIN;
        int TEMP = f(root , maxi);
        return maxi;
    }
};
