//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2) {
    int m = v2.size();
    int n = v1.size();
    int j = 0; // For index of v2

    // Traverse v1 and v2
    for (int i = 0; i < n && j < m; i++) {
        if (v1[i] == v2[j]) {
            j++;
        }
    }
    return (j == m);
}


// } Driver Code Ends
// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n = arr.size();
        
        if(n == 3) {
            for(int i = 1; i < n; i++) {
                if(arr[i] <= arr[i-1]) return {};
            }
            return arr;
        }
        
        vector<int> mini(n, arr[0]);
        vector<int> maxi(n, arr[n-1]);
        
        int minimum = arr[0];
        for(int i = 1; i < n; i++) {
            minimum = min(minimum, arr[i]);
            mini[i] = minimum;
        }
        
        int maximum = arr[n-1];
        for(int i = n-2; i >= 0; i--) {
            maximum = max(maximum, arr[i]);
            maxi[i] = maximum;
        }
        
        for(int i = 1; i < n; i++) {
            if(mini[i] != arr[i] && mini[i] < arr[i] && maxi[i] != arr[i] && maxi[i] > arr[i]) {
                return {mini[i], arr[i], maxi[i]};
            }
        }
        
        return {};
    }
};

//{ Driver Code Starts.

// Driver program to test above function
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
        int n = arr.size();
        Solution obj;
        auto res = obj.find3Numbers(arr);
        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and isSubSequence(arr, res)) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends