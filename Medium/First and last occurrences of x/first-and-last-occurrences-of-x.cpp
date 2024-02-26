//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> V;
        for (int i = 0; i < n; i++) {
            if(arr[i] == x) V.push_back(i);
            if(!V.empty() && arr[i] != x) break;
        }
        if(V.empty()) return {-1, -1};
        if(V.size() == 1) return {V[0], V[0]};
        return {V[0], V[V.size()-1]};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends