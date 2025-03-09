//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int expand(int l, int r, string& s) {
        int count = 0;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if(r-l+1 > 1) count++;
            l--;
            r++;
        }
        return count;
    }

    int countPS(string &s) {
        if (s.empty()) return 0;

        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            cnt += expand(i, i, s);
            cnt += expand(i, i + 1, s);
        }
        return cnt;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends