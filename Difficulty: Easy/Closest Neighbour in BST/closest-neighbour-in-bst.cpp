/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void fun(Node* root, int k, int& res) {
        if(root == NULL) return;
        
        if(root->data > k) fun(root->left, k, res);
        else {
            res = root->data;
            fun(root->right, k, res);
        }
        return;
    }
    int findMaxFork(Node* root, int k) {
        // code here
        int res = -1;
        fun(root, k, res);
        
        return res;
    }
};