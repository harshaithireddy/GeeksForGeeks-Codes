//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        vector<int> res;
        map<int, priority_queue<int>> mp;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] != x) mp[abs(arr[i] - x)].push(arr[i]);
        }
        
        for(auto it : mp) {
            auto pq = it.second;
            while(k > 0 && !pq.empty()) {
                res.push_back(pq.top());
                pq.pop();
                k--;
            }
            if(k == 0) return res;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends