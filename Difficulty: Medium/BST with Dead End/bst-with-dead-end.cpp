/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
    bool res = false;
    void fun(Node* root, unordered_set<int>& st) {
        if(!root) return;
        
        if(!root->left && !root->right) {
            int x = root->data;
            if(st.count(x-1) && st.count(x+1)) {
                res = true;
                return;
            }
        }
        
        st.insert(root->data);
        if(root->left) fun(root->left, st);
        if(root->right) fun(root->right, st);
    }
    bool isDeadEnd(Node *root) {
        // Code here
        unordered_set<int> st;
        st.insert(0);
        fun(root, st);
        return res;
    }
};