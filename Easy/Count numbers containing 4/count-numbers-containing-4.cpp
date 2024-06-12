//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int res = 0;
        for(int i = 0; i <= n; i++) {
            int temp = i;
            while(temp > 0) {
                if(temp % 10 == 4) {
                    res++;
                    break;
                }
                temp /= 10;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends