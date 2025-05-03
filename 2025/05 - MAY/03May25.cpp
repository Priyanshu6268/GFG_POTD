class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int getNearestPrime(int num) {
        if (isPrime(num)) return num;

        int left = num - 1, right = num + 1;
        while (true) {
            if (isPrime(left) && isPrime(right))
                return left; 
            if (isPrime(left)) return left;
            if (isPrime(right)) return right;
            left--;
            right++;
        }
    }

    Node* primeList(Node* head) {
        Node* curr = head;
        while (curr) {
            curr->val = getNearestPrime(curr->val);
            curr = curr->next;
        }
        return head;
    }
};
