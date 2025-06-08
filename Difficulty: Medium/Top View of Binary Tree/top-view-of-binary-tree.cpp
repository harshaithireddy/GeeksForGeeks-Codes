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
    void fun(Node* root, vector<int>& res) {
        map<int, int> mpp;
        queue<pair<Node*, int>> Q;
        
        Q.push({root, 0});
        mpp[0] = root->data;
        while(!Q.empty()) {
            auto i = Q.front();
            Q.pop();
            
            Node* node = i.first;
            int line = i.second;
            if(mpp.find(line) == mpp.end()) mpp[line] = node->data;
            
            if(node->left) Q.push({node->left, line - 1});
            if(node->right) Q.push({node->right, line + 1});
        }
        
        for(auto it : mpp) {
            res.push_back(it.second);
        }
    }
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        
        fun(root, res);
        return res;
    }
};