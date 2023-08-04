class Solution{
public:
    void helpr(stack<int> &s1,stack<int> &s2){
        if(s1.empty()){
            return;
        }
        s2.push(s1.top());
        s1.pop();
        helpr(s1,s2);
    }
    void insertAtBottom(stack<int> &s,int k){
        if(!s.size()){
            s.push(k);
            return;
        }
        int top = s.top();
        s.pop();
        insertAtBottom(s,k);
        s.push(top);
    }
    void Reverse(stack<int> &St){
        // stack<int> s;
        // helpr(St,s);
        // St = s;
        // if(St.size()==0){
        //     return;
        // }
        // int top = St.top();
        // St.pop();
        // Reverse(St);
        // St.push(top);
        if(St.empty()){
            return;
        }
        int num = St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St,num);
    }
};
