//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        string s1 = "", s2 = "";
    
        for(int i = 0; i < arr.size(); i++) {
            if(i % 2 == 0) s1 += to_string(arr[i]);
            else s2 += to_string(arr[i]);
        }
    
        int l1 = s1.size(), l2 = s2.size();
        int carry = 0, i = l1 - 1, j = l2 - 1;
        string res = "";
    
        while(i >= 0 || j >= 0 || carry > 0) {
            int digit1 = (i >= 0) ? s1[i--] - '0' : 0;
            int digit2 = (j >= 0) ? s2[j--] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            res += (sum % 10) + '0';
            carry = sum / 10;
        }
        
        reverse(res.begin(), res.end());
    
        i = 0;
        while(i < res.size() && res[i] == '0') {
            res.erase(i, 1);
        }
    
        return res.empty() ? "0" : res;
    }


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends