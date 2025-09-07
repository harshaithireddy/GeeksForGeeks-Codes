/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        multiset<int> ms;
        for(int i = 0; i < arr.size(); i++) {
            Node* temp = arr[i];
            while(temp) {
                ms.insert(temp->data);
                temp = temp->next;
            }
        }
        
        Node* head = new Node(-1);
        Node* curr = head;
        for(auto it : ms) {
            curr->next = new Node(it);
            curr = curr->next;
        }
        return head->next;
    }
};