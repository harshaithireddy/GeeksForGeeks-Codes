//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
     void subset(set<vector<int>>& res, vector<int> arr,int n,int ind,vector<int> curr) {
        if(ind == n) {
            sort(curr.begin(),curr.end());
            res.insert(curr);
            return;
        }
        
        curr.push_back(arr[ind]);
        subset(res,arr,n,ind+1,curr);
        curr.pop_back();
        subset(res,arr,n,ind+1,curr); 
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>> res;
        vector<int>curr;
        subset(res,arr,n,0,curr);
        vector<vector<int>> r(res.begin(),res.end());
        return r;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends