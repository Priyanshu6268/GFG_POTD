struct Node *insert(struct Node *head, int data) {
    // create the new node and set the pointer to the head
    Node* newNode = new Node(data);
    newNode->npx = head;
    // head pointer is the previous node, XOR it to new node
    if(head)
    {
        head->npx = XOR(head->npx, newNode);
    }
    return newNode;
}

vector<int> getList(struct Node *head) {
    // vector containing the answer
    vector<int> theList;
    // run through the list
    while(head)
    {
        // insert the data to vector
        theList.push_back(head->data);
        // head points just to the next node
        Node* next = head->npx;
        // using the XOR again will cancel the head address
        if(next)
        {
            next->npx = XOR(next->npx, head);
        }
        // increase the list
        head = next;
    }
    return theList;
}
