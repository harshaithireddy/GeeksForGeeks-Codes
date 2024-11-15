//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int maxi = INT_MIN;
        int sMaxi = INT_MIN;
         
        for(int i = 0; i < n; i++) {
            if(arr[i] > maxi) {
                sMaxi = maxi;
                maxi = arr[i];
            }
            else if(arr[i] > sMaxi &&  maxi != arr[i]) {
                sMaxi = arr[i];
            }
        }
        
        return (sMaxi == INT_MIN) ? -1 : sMaxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends