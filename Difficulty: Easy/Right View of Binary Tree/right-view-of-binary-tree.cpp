/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution {
  public:
    void fun(Node* root, int level, vector<int>& res) {
        if(!root) return;
        
        if(level == res.size()) res.push_back(root->data);
        fun(root->right, level + 1, res);
        fun(root->left, level + 1, res);
    }
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
        vector<int> res;
        
        fun(root, 0, res);
        return res;
    }
};