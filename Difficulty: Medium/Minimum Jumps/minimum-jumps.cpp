//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        if(arr[0] == 0) return -1;
        
        int maxi = 0, limit = 0;
        int jumps = 0;
        
        for(int i = 0; i < n-1; i++) {
            maxi = max(maxi, i + arr[i]);
            if(i == limit) {
                jumps++;
                limit = maxi;
            }
        }
        if(limit < n-1) return -1;
        return jumps;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends