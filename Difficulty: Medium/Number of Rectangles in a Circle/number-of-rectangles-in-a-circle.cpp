//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        int a = 1;
        int b = 2 * r;
        
        int d = 2 * r;
        
        int res = 0;
        while(a <= b) {
            if(a * a + b * b <= d * d) {
                res += 2 * (b - a + 1) - 1;
                a++;
            }
            else{
                b--;
            }
        }
        return res;
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
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends