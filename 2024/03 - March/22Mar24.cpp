class Solution
{
    public:
    void travel(Node* temp, vector<int> &ans, int left){
        if(temp){
            if(left>ans.size()){
                ans.push_back(0);
            }
            ans[left-1] += temp->data;
            travel(temp->left, ans, left+1);
            travel(temp->right, ans, left);
        }
    }
    
    vector <int> diagonalSum(Node* root) {
        vector<int> ans;
        int left = 1;
        travel(root, ans, left);
        return ans;
    }
};
