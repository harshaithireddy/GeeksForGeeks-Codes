/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void fun(Node* root, vector<int>& res) {
        queue<pair<Node*, int>> Q;
        map<int, int> mpp;
        Q.push({root, 0});
        mpp[0] = root->data;
        
        while(!Q.empty()) {
            auto i = Q.front();
            Q.pop();
            
            Node* node = i.first;
            int line = i.second;
            mpp[line] = node->data;
            
            if(node->left) Q.push({node->left, line - 1});
            if(node->right) Q.push({node->right, line + 1});
        }
        
        for(auto it : mpp) {
            res.push_back(it.second);
        }
    }
    
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        
        fun(root, res);
        return res;
    }
};