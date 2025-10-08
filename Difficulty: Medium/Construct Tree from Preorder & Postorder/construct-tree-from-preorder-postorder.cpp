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
};
*/

class Solution {
  public:
    unordered_map<int, int> postIndex;
    int preIndex = 0;

    Node* build(vector<int>& pre, vector<int>& post, int start, int end) {
        if(preIndex >= pre.size() || start > end) return NULL;

        Node* root = new Node(pre[preIndex++]);

        if(start == end || preIndex >= pre.size()) return root;

        int index = postIndex[pre[preIndex]];
        root->left = build(pre, post, start, index);
        root->right = build(pre, post, index + 1, end - 1);

        return root;
    }
    
    Node *constructTree(vector<int> &pre, vector<int> &post) {
        // code here
        int n = pre.size();
        for(int i = 0; i < n; i++) {
            postIndex[post[i]] = i;
        }

        return build(pre, post, 0, n - 1);
    }
};