//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        if(n == 0 || n == 1) return n;
        long l = 0;
        long r = n;
        while(l < r) {
            long mid = l + (r - l) / 2;
            if(mid * mid == n || mid == l) {
                return mid;
            }
            else if(mid * mid > n) r = mid;
            else l = mid;
        }
        return l;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends