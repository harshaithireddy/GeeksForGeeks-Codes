//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> mpp;
        int cnt = 0;
        int n = arr.size();
        vector<vector<string>> res;
        
        for(auto s : arr) {
            string x = s;
            sort(x.begin(), x.end());
            
            mpp[x].push_back(s);
        } 
        
        for(auto it : mpp) {
            res.push_back(it.second);
        }
        
        sort(res.begin(), res.end(), [](const vector<string>& a, const vector<string>& b) {
            return a[0] < b[0];
        });
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends