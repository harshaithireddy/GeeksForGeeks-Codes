//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
        // code here
        int x = 0;
        int cnt = 0;
        int add = 1;
        
        while(x < d) {
            x += add;
            add++;
            cnt++;
        }
        while((x - d) % 2 != 0) {
            x += add;
            add++;
            cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends