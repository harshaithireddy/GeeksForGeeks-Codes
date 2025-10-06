/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* temp = head;
          int i = 1;
          if(x == 1) {
              head = head->next;
              delete (temp);
              return head;
          }
          while(i != (x - 1)) {
              temp = temp->next;
              i++;
          }
          if(temp->next == nullptr){
              delete temp->next;
              return head;
          }
          Node* d = temp->next;
          temp->next = temp->next->next;
          delete d;
          return head;
    }
};