/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head){
        Node *curr = head, *prev = nullptr, *next = curr->next;
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        head1 = reverseList(head1);
        head2 = reverseList(head2);
        int carry = 0;
        
        Node* ans = new Node(0);
        Node* tail = ans;
        while(head1 || head2 || carry) {
            int sum = carry;
            if(head1) {
                sum += head1->data;
                head1 = head1->next;
            }
            if(head2) {
                sum += head2->data;
                head2 = head2->next;
            }
            tail->next = new Node(sum % 10);
            tail = tail->next;
            carry = sum / 10;
        }
        Node *res = reverseList(ans->next);
        while(res && res->data == 0 && res->next) {
            res = res->next;
        }
        return res;
    }
};