// Function to insert a node in a BST.

/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
    public:
    Node* insert_(Node* node,int data){
        if(!node){
            return new Node(data);
        }
        if(node->data == data)return node;
        if(node->data > data){
            if(node->left){
                return insert_(node->left,data);
            }
            else{
                node->left = new Node(data);
                return node;
            }
        }
        else {
            if(node->right){
                return insert_(node->right,data);
            }
            else{
                node->right = new Node(data);
                return node;
            }
        }
    }
        Node* insert(Node* node, int data) {
            insert_(node,data);
            return node;
    }

};
