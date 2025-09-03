/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        while(head->next) {
            swap(head->next, head->prev);
            head = head->prev;
        }
        swap(head->next, head->prev);
        return head;
    }
};