//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int, int>> V;
        for(int i = 0; i < n; i++) {
            V.push_back({start[i], end[i]});
        }
        
        auto compare = [](pair<int,int> &a, pair<int,int> &b) {
            if(a.second == b.second) return a.first < b.first;
            return a.second < b.second;
        };
        sort(V.begin(), V.end(), compare);
        
        int res = 1;
        int prev = 0;
        for(int i = 1; i < n; i++) {
            if(V[i].first > V[prev].second) {
                prev = i;
                res++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends