/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
     int solve(Node* root, int l, int r) {
        int sum = 0;
        if(root == nullptr) return 0;
        sum += solve(root->left, l, r);
        
        if(root->data >= l && root->data <= r) {
            sum += root->data;
        }
        sum += solve(root->right, l, r);
        return sum;
    }
    
    int nodeSum(Node* root, int l, int r) {
        // code here
        return solve(root, l, r);
    }
};
