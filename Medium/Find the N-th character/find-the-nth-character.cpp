//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string& s, int r, int n) {
        //code here
        string s1 = "";
        int i = 0;
        while(r--) {
            i = 0;
            while(i < s.size()) {
                if(s[i] == '0') s1 += "01";
                else if(s[i] == '1') s1 += "10";
                i++;
                if(s1.size() > s.size()) break;
            }
            s = s1;
            s1 = "";
        }
        return s[n];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends