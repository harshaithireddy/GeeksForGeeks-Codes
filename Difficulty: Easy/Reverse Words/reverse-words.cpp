//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        vector<string> V;
        string S = "";
        for(int i = 0; i < str.size(); i++) {
            if(str[i] != '.') {
                S += str[i];
            }
            else {
                V.push_back(S);
                S = "";
            }
        }
        V.push_back(S);
        
        string res;
        for(int i = 0; i < V.size(); i++) {
            res = V[i] + "." + res; 
        }
        res.erase(res.size() - 1);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends