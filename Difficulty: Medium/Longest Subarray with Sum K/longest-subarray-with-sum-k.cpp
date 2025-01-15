//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& A, int K) {
        // code here
        int N = A.size();
        unordered_map<int, int> mpp;
        int sum = 0;
        int maxi = 0;
        for(int i = 0; i < N; i++) {
            sum += A[i];
            if(sum == K) {
                maxi = i + 1;
            }
            
            if(mpp.find(sum - K) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum - K]);
            }
            if(mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends