//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    private:
    int search(int arr[], int start, int end, int value) 
    { 
        for(int i = start; i <= end; i++) 
        { 
            if(arr[i] == value) 
                return i;
        }
        return -1;
    }
    Node* Build(int in[], int pre[], int& index, int start, int end) {
        if(start > end) return NULL;
        
        Node* root = new Node(pre[index]);
        index++;
        
        if(start == end) {
            return root;
        }
        
        int x = search(in, start, end, root->data);
        root->left = Build(in, pre, index, start, x-1);
        root->right = Build(in, pre, index, x+1, end);
        
        return root;
    }
    
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int index = 0;
        Node* root = Build(in, pre, index, 0, n-1);
        return root;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends