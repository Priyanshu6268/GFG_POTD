class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // create the head element - return of the function
        Node* head = new Node(mat[0][0]);
        Node* col0 = head;
        Node* prevNode = col0;
        Node* prevNode1 = col0;
        // first build row # 0
        for(int i=1; i<mat[0].size(); i++)
        {
            Node* newNode = new Node(mat[0][i]);
            prevNode->right = newNode;
            prevNode = newNode;
        }
        
        // outer loop creates the rows
        for(int i=1; i<mat.size(); i++)
        {
            // create first column and keep the node for next line
            prevNode1 = col0;
            col0 = new Node(mat[i][0]);
            prevNode = col0;
            prevNode1->down = col0;
            // create the rest of the row and connect previous one
            for(int j=1; j<mat[i].size(); j++)
            {
                Node* newNode = new Node(mat[i][j]);
                prevNode->right = newNode;
                prevNode = newNode;
                prevNode1 = prevNode1->right;
                prevNode1->down = newNode;
            }
        }
        return head;
    }
};
