//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}


// } Driver Code Ends

/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        vector<long long> V1;
        vector<long long> V2;
        
        Node* temp1 = head1;
        while(temp1 != NULL) {
            if(temp1->data < x) V1.push_back(temp1->data);
            temp1 = temp1->next;
        }
        sort(V1.begin(), V1.end());
        
        Node* temp2 = head2;
        while(temp2 != NULL) {
            if(temp2->data < x) V2.push_back(temp2->data);
            temp2 = temp2->next;
        }
        sort(V2.begin(), V2.end());
        
        int i = 0;
        int j = V2.size() - 1;
        int cnt = 0;
        
        int n = V1.size();
        int m = V2.size();
        
        while(i < n && j >= 0) {
            if(V1[i] + V2[j] == x) {
                cnt++;
                i++;
                j--;
            }
            else if(V1[i] + V2[j] < x) {
                i++;
            }
            else {
                j--;
            }
        }
        
        return cnt;
    }
};



//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        Solution obj;
        cout << obj.countPairs(head1, head2, x) << '\n';
    }
    return 0;
}
// } Driver Code Ends