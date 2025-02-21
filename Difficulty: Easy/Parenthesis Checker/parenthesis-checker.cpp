//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isMatching(char opening, char closing) {
        return (opening == '(' && closing == ')') || (opening == '[' && closing == ']') || (opening == '{' && closing == '}');
    }
    
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if(st.empty() || !isMatching(st.top(), s[i])) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends