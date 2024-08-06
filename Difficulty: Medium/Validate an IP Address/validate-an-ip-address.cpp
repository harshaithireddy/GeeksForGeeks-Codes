//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool checker(string& s) {
        if(s.empty() || (s.size() > 1 && s[0] == '0')) return false;
        for(char c : s) {
            if(!isdigit(c)) return false;
        }
        int n = stoi(s);
        return (n >= 0 && n <= 255);
    }
    int isValid(string str) {
        vector<string> octets;
        string s = "";
        int dots = 0;
    
        for(char c : str) {
            if(c == '.') {
                dots++;
                if(!s.empty()) {
                    octets.push_back(s);
                    s = "";
                }
                else return false;
            }
            else s += c;
        }
    
        if(!s.empty()) {
            octets.push_back(s);
        }
    
        if(dots != 3 || octets.size() != 4) return false;
    
        for(string& i : octets) {
            if(!checker(i)) return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends