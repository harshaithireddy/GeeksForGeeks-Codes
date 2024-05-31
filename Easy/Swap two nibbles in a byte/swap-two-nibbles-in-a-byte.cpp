//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        string s = "";
        while(n) {
            int dig = n % 2;
            s.append(std::to_string(dig));
            n /= 2;
        }
        reverse(s.begin(), s.end());
        
        if (s.size() < 8) s.insert(0, 8 - s.size(), '0');

        string res = "";
        for (int i = 4; i < 8; i++) res.push_back(s[i]);
        for (int i = 0; i < 4; i++) res.push_back(s[i]);

        int sum = 0;
        int cnt = 0;
        for (int i = res.size() - 1; i >= 0; i--) {
            sum += (res[i] - '0') * (1 << cnt);
            cnt++;
        }
        return sum;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends