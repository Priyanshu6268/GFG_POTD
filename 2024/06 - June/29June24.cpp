bool areIdentical(struct Node *head1, struct Node *head2) {
    vector<int>check1;
    vector<int>check2;
    //storing in check1 vector
    Node*current=head1;
    int n=0;
    while(current!=NULL)
    {
        current=current->next;
        n++;
    }
    current=head1;
    for(int i=0;i<n;i++)
    {
        check1.push_back(current->data);
        current=current->next;
    }
    //store head2 in check2.............
    Node*current1=head2;
    int n1=0;
    while(current1!=NULL)
    {
        current1=current1->next;
        n1++;
    }
    current1=head2;
    for(int i=0;i<n1;i++)
    {
        check2.push_back(current1->data);
        current1=current1->next;
    }
    
   return check1==check2;
}
