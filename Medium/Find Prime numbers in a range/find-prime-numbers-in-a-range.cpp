//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    bool isPrime(int n) {
        if(n <= 1) return false;
        if(n <= 3) return true;
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) return false;
        }
        return true;
    }
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> V;
        for(int i = M; i <= N; i++) {
            if(isPrime(i)) V.push_back(i);
        }
        return V;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends