class Solution {
  public:
    int ans = 0;
    int helper(Node* root, int key){
        if(!root)return 0;
        int left = helper(root->left,key);
        int right = helper(root->right,key);
        if(left<0){
            ans=max(abs(left)+right,ans);
        }
        else if(right<0){
            ans=max(abs(right)+left,ans);
        }
        else{
            ans=max({ans,left,right});
        }
        if(root->data == key){
            return -1;   
        }
        if(left<0)return left-1;
        if(right<0)return right-1;
        return max(left,right)+1;
    }
    int minTime(Node* root, int target) {
        helper(root,target);
        return ans;
    }
};
