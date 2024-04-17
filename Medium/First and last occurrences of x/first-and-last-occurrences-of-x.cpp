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
        int left = 0;
        int right = n - 1;
        
        vector<int> v;
        v.push_back(-1);
        v.push_back(-1);
        
        while(left <= right) {
            if(arr[left] == x && arr[right] == x) {
                v[0] = left;
                v[1] = right;
                break;
            }
            if(arr[left] != x) left++;
            if(arr[right] != x) right--;
        }
        if(!v.empty()) return v;
        return {-1, -1};
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