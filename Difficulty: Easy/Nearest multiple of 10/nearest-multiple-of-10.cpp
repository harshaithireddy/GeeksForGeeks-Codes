//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n = str.size();
        int lastDigit = str[n - 1] - '0';
    
        if(lastDigit <= 5) {
            str[n - 1] = '0';
        }
        else {
            str[n - 1] = '0';
            int carry = 1;
            int i = n - 2;
    
            while(i >= 0 && carry > 0) {
                int digit = str[i] - '0' + carry;
                if(digit == 10) {
                    str[i] = '0';
                    carry = 1;
                }
                else {
                    str[i] = digit + '0';
                    carry = 0;
                }
                i--;
            }
    
            if(carry > 0) {
                str.insert(str.begin(), '1');
            }
        }
    
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends