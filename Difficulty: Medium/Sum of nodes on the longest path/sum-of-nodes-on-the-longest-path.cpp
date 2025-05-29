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
    int n;
    void fun(Node* root, int cnt, int sum, int &res) {
        if(root == NULL) return;
    
        sum += root->data;
        cnt++;
        if(root->left == NULL && root->right == NULL) {
            if(cnt > n) {
                n = cnt;
                res = sum;
            }
            else if(cnt == n) res = max(res, sum);
            return;
        }
        
        if(root->left) fun(root->left, cnt, sum, res);
        if(root->right) fun(root->right, cnt, sum, res);
    }
    
    int sumOfLongRootToLeafPath(Node *root) {
        n = 0;
        int res = 0;
        fun(root, 0, 0, res);
        return res;
    }
};
