//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a, a + n);
        sort(b, b + m);
        
        int totA = accumulate(a, a + n, 0);
        int totB = accumulate(b, b + m, 0);
        
        int i = 0;
        int j = 0;
        while(i < n && j < m) {
            int x = totA - a[i] + b[j];
            int y = totB + a[i] - b[j];
            
            if(x == y) return 1;
            if(x > y) i++;
            else j++;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends