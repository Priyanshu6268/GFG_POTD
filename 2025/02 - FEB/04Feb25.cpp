class Solution {
  public:
    int ans = 0;
    int findDepth(Node* curr){
        if(curr == NULL) return 0;
        
        int l = findDepth(curr -> left);
        int r = findDepth(curr -> right);
        
        ans = max(ans, r + l);
        
        return (1 + max(l, r));
    }
    int diameter(Node* root) {
        findDepth(root);
        return ans;
    }
};
