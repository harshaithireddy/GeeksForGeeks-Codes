//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countWays(string s1, string s2) {
        // code here
        int mod = 1e9+7;
        int n = s1.length();
        int m = s2.length();
        
        vector<int> prev(m + 1, 0);
        prev[0] = 1;
    
        for(int i = 1; i <= n; i++) {
            for(int j = m; j >= 1; j--) {
                if(s1[i - 1] == s2[j - 1]) {
                    prev[j] = (prev[j - 1] + prev[j]) % mod;
                }
            }
        }
        return prev[m];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends