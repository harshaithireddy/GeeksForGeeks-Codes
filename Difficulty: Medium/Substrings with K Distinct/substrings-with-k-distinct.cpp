//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int cnt(string& s, int k) {
        unordered_map<char, int> mpp;
        int n = s.size();
        int l = 0;
        int res = 0;
        
        for(int r = 0; r < n; r++) {
            mpp[s[r]]++;
            while(mpp.size() >= k) {
                mpp[s[l]]--;
                if(mpp[s[l]] == 0) mpp.erase(s[l]);
                l++;
            }
            res += r - l + 1;
        }
        return res;
    }
    int countSubstr(string& s, int k) {
        // code here
        return cnt(s, k+1) - cnt(s, k);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends