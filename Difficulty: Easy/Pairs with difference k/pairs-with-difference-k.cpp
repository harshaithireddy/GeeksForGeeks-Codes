//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }
        
        int res = 0;
        for(int i = 0; i < n; i++) {
            if(mpp.find(arr[i] - k) != mpp.end() && arr[i] - k != arr[i]) {
                res += mpp[arr[i] - k];
            }
            else if(mpp.find(arr[i] - k) != mpp.end() && arr[i] - k == arr[i]) {
                res += mpp[arr[i] - k] - 1;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends