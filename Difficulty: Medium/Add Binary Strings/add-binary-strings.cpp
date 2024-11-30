//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;
        string res = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            
            if(i >= 0) sum += s1[i] - '0';
            if(j >= 0) sum += s2[j] - '0';
            
            carry = sum / 2;
            res = (char)(sum % 2 + '0') + res;
            
            i--;
            j--;
        }
        
        i = 0;
        while(i < res.size() && res[i] == '0') {
            i++;
        }
    
        if(i == res.size()) {
            return "0";
        }
    
        return res.substr(i);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends