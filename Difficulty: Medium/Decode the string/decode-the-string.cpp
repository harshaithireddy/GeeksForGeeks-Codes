//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<string> st;
        string res = "";
        string temp = "";
        int num = 0;
    
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if(s[i] == '[') {
                st.push(res);
                st.push(to_string(num));
                res = "";
                num = 0;
            }
            else if(s[i] == ']') {
                int cnt = stoi(st.top());
                st.pop();
                string prev = st.top();
                st.pop();
    
                string x = "";
                for(int j = 0; j < cnt; j++) {
                    x += res;
                }
                res = prev + x;
            }
            else {
                res += s[i];
            }
        }
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

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends