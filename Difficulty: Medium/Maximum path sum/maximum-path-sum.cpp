/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int solver(Node* root, int& res) {
        if(root == NULL) return 0;
        
        int left = max(0, solver(root->left, res));
        int right = max(0, solver(root->right, res));
        
        res = max(res, root->data + left + right);
        return  root->data + max(left, right);
    }

    int findMaxSum(Node *root) {
        // code here
        int res = INT_MIN;
        solver(root, res);
        return res;
    }
};