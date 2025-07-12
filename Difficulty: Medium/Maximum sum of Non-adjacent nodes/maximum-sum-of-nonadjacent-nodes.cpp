// Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    // Function to return the maximum sum of non-adjacent nodes.
    unordered_map<Node*, int> dp;
    int solve(Node* root) {
        if(root == NULL) {
            return 0;
        }
        
        if(dp.find(root) != dp.end()) {
            return dp[root];
        }
        
        int pick = root->data;
        if(root->left) {
            pick += solve(root->left->left);
            pick += solve(root->left->right);
        }
        if(root->right) {
            pick += solve(root->right->left);
            pick += solve(root->right->right);
        }
        
        int notPick = solve(root->left) + solve(root->right);
        dp[root] = max(pick, notPick);
        
        return dp[root];
    }
    int getMaxSum(Node *root) {
        // code here
        return solve(root);
    }
};