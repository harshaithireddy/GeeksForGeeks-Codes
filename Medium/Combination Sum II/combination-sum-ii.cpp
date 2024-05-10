//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void combinations(int ind, int k, vector<int>& arr, vector<vector<int>>& res, vector<int>& V) {
        if(k == 0) {
            res.push_back(V);
            return;
        }
        for(int i = ind; i < arr.size(); i++) {
            if(i > ind && arr[i] == arr[i-1]) continue;
            if(arr[i] > k) break;
            V.push_back(arr[i]);
            combinations(i+1, k - arr[i], arr, res, V);
            V.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        vector<int> V;
        combinations(0, k, arr, res, V);
        
        return res;
        
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends