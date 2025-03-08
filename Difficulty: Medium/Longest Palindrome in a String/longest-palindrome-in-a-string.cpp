//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int expand(int l, int r, string s) {
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        return r - l - 1;
    }
    string longestPalindrome(string &s) {
        // code here
        if(s.empty()) return "";

        int n = s.size();
        int start = 0, maxi = 0;
        for(int i = 0; i < n; i++) {
            int x = expand(i, i, s);
            int y = expand(i, i + 1, s);
        
            int len = max(x, y);
            if(len > maxi) {
                maxi = len;
                start = i - (len-1) / 2;
            }
        }
        return s.substr(start, maxi);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends