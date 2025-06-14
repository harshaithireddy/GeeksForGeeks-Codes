/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool solve(Node* r1, Node* r2) {
        if (!r1 && !r2) return true;
        
        if (!r1 || !r2 || r1->data != r2->data) return false;
        
        return solve(r1->left, r2->right) && solve(r1->right, r2->left);
    }
    
    bool isSymmetric(Node* root) {
        if(!root) return true;
        
        return solve(root->left, root->right);
    }
};
