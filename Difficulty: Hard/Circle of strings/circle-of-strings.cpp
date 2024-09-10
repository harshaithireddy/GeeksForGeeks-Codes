//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void dfs(int node,vector<bool>& vis,vector<int> adj[]){
        if(vis[node] == false) return;
        vis[node] = false;
        for(auto it : adj[node]){
            dfs(it, vis, adj);
        }
    }
    
    int isCircle(vector<string> &arr) {
        // code here
        vector<int> adj[26];
        vector<int> indegree(26, 0);
        vector<bool> vis(26, false);
        
        for(int i = 0; i < arr.size(); i++) {
            adj[arr[i][0] - 'a'].push_back(arr[i].back() - 'a');
            indegree[arr[i].back() - 'a']++;
            vis[arr[i][0] - 'a'] = true;
            vis[arr[i].back() - 'a'] = true;
        }
        
        for(int i = 0; i < 26; i++) {
            if(indegree[i] != adj[i].size()) return 0;
        }
        dfs(arr[0][0] - 'a', vis, adj);
        
        for(int i = 0; i < 26; i++) {
            if(vis[i] == true) return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends