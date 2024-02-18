/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}*/

#include <queue>

using namespace std;

class Solution
{
    public:
        /*You are required to complete below method */
        
        int sumOfLeafNodes(Node *root ){
            
            // Method-1: DFS
            
            // if(!root) return 0;
            
            // if(!root->left && !root->right) return root->data;
            
            // return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
            
            
            // Method-2: BFS
            
            int sum = 0;
            
            queue<Node*> q;
            
            q.push(root);
            
            while(!q.empty())
            {
                Node* currNode = q.front();
                q.pop();
                
                if(!currNode->left && !currNode->right)
                {
                    sum += currNode->data;
                }
                
                if(currNode->left) q.push(currNode->left);
                
                if(currNode->right) q.push(currNode->right);
            }
            
            return sum;
        }
};
