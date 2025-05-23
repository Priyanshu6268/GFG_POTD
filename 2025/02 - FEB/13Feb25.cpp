class Solution {
    bool isPresent(const Node *root, const int & target, unordered_set<int> & mp){
        if(!root) return false;
        bool exists = isPresent(root->left, target, mp);
        if(exists) return true;
        if(mp.find(target - root->data) != mp.end()) return true;
        mp.insert(root->data);
        return isPresent(root->right, target, mp);
    }
  public:
    bool findTarget(Node *root, int target) {
        unordered_set<int> mp;
        return isPresent(root, target, mp);
    }
};
