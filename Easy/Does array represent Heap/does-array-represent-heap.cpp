//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution{
    private:
    void Construct(int arr[], int index, TreeNode* root, int size) {
        if(root == NULL) return;
        if(2 * index + 1 < size) {
            root->left = new TreeNode(arr[2 * index + 1]);
            Construct(arr, 2 * index + 1, root->left, size);
        }
        
        if(2 * index + 2 < size) {
            root->right = new TreeNode(arr[2 * index + 2]);
            Construct(arr, 2 * index + 2, root->right, size);
        }
    }
    
    bool Checker(TreeNode* root) {
        if(root == NULL) return true;

        if(root->left != NULL && (root->left->data > root->data)) return false;

        if(root->right != NULL && (root->right->data > root->data)) return false;

        return Checker(root->left) && Checker(root->right);
    }
    
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        TreeNode* root = new TreeNode(arr[0]);
        Construct(arr, 0, root, n);
        
        return Checker(root);
    }
};


//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends