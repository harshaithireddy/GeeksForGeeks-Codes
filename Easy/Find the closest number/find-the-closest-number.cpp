//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int left = 0;
        int right = n - 1;
        int closest = arr[0];
        
        while(left <= right) {
            int mid = (left + right) / 2;
            
            if(arr[mid] == k) return arr[mid];
            else if(arr[mid] < k) left = mid + 1;
            else right = mid - 1;
            
            if(abs(arr[mid] - k) < abs(closest - k)) closest = arr[mid];
            else if(abs(arr[mid] - k) == abs(closest - k) && arr[mid] > closest) closest = arr[mid];
        }
        return closest;
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
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends