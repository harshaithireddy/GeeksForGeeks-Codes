//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        vector<int> V(27, 0);
        int cnt = 0;
        
        for(int i = 0; i < s.size(); i++) {
            V[(s[i] - 'a') + 1]++;
        }
        for(int i = 1; i < 27; i++) {
            if(V[i] > 0) {
                if(i % 2 == 0) {
                    if(V[i] % 2 == 0) cnt++;
                }
                else {
                    if(V[i] % 2 == 1) cnt++;
                }
            }
        }
        if(cnt % 2 == 0) return "EVEN";
        return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends