class solution {
  public:
    long long mod=1000000007;
    long long multiplyTwoLists(Node *first, Node *second) {
        long long ans1=0,ans2=0;
        while(first){
            ans1=(ans1*10 + first->data)%mod;
            first=first->next;   
        }
         while(second){
            ans2=(ans2*10 + second->data)%mod;
            second=second->next;
        }
       return (ans1*ans2)%mod;   
    }
};
