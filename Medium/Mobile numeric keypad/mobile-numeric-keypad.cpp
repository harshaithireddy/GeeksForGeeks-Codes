//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long getCount(int n) {
        // Your code goes here
        if(n == 1) return 10;
    
        vector<vector<int>> arr = {
            {0, 8},
            {1, 2, 4}, 
            {1, 2, 3, 5},
            {2, 3, 6}, 
            {1, 4, 5, 7},
            {2, 4, 5, 6, 8}, 
            {3, 5, 6, 9}, 
            {4, 7, 8}, 
            {0, 5, 7, 8, 9}, 
            {6, 8, 9}
        };
        
        vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));
        for(int i = 0; i <= 9; i++) {
            dp[1][i] = 1;
        }
        for(int i = 2; i <= n; i++) {
            for(int j = 0; j < 10; j++) {
                for(int x : arr[j]) {
                    dp[i][j] += dp[i - 1][x];
                }
            }
        }
        long long ans = 0;
        for(int i = 0; i <= 9; i++) {
            ans += dp[n][i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends