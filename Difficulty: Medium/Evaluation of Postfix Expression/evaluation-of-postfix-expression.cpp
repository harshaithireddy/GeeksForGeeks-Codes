//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // code here
        stack<int> st;
    
        for(int i = 0; i < arr.size(); i++) {
            if(isdigit(arr[i][0]) || (arr[i][0] == '-' && arr[i].size() > 1)) {
                st.push(stoi(arr[i]));
            }
            else {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if(arr[i] == "+") st.push(b + a);
                else if (arr[i] == "-") st.push(b - a);
                else if (arr[i] == "*") st.push(b * a);
                else if (arr[i] == "/") st.push(b / a);
            }
        }
        return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends