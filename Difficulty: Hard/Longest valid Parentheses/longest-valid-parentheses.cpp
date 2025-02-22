//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        stack<int> st;
        st.push(-1);
        int res = 0;
        int i = 0;
        
        for(auto it : s) {
            if(it == '(') st.push(i);
            else {
                if(!st.empty()) st.pop();
                if(!st.empty()) res = max(res, i - st.top());
                else st.push(i);
            }
            i++;
        }
        return res;
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
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends