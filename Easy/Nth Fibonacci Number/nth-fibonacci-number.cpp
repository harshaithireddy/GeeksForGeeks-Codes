//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int MOD = 1e9 + 7;
        int a = 0;
        int b = 1;
        int c;
        if(n == 0 || n == 1) return n;
        
        for(int i = 2; i <= n; i++) {
            c = (a + b) % MOD;
            a = b;
            b = c;
        }
        return c % MOD;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends