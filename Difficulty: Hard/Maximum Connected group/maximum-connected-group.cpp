//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void floodFill(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& grid, int& size, int color) {
        int n = grid.size();
        if(i < 0 || j < 0 || i >= n || j >= n || vis[i][j] || grid[i][j] == 0) return;
        
        vis[i][j] = color;
        size++;
        
        floodFill(i + 1, j, vis, grid, size, color);
        floodFill(i - 1, j, vis, grid, size, color);
        floodFill(i, j + 1, vis, grid, size, color);
        floodFill(i, j - 1, vis, grid, size, color);
    }
    
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0) return 0;
        
        vector<vector<int>> vis(n, vector<int>(n, 0));
        vector<int> size;
        
        int color = 1;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 1 && !vis[i][j]) {
                    int componentSize = 0;
                    floodFill(i, j, vis, grid, componentSize, color);
                    size.push_back(componentSize);
                    color++;
                }
            }
        }
        
        if(size.empty()) return 1; 
        
        int maxSize = *max_element(size.begin(), size.end());
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) {
                    set<int> uniqueColors;
                    
                    if(i - 1 >= 0 && vis[i - 1][j] != 0) uniqueColors.insert(vis[i - 1][j]);
                    if(i + 1 < n && vis[i + 1][j] != 0) uniqueColors.insert(vis[i + 1][j]);
                    if(j - 1 >= 0 && vis[i][j - 1] != 0) uniqueColors.insert(vis[i][j - 1]);
                    if(j + 1 < n && vis[i][j + 1] != 0) uniqueColors.insert(vis[i][j + 1]);
                    
                    int tempSize = 1;
                    for(int c : uniqueColors) {
                        tempSize += size[c - 1]; 
                    }
                    
                    maxSize = max(maxSize, tempSize);
                }
            }
        }
        
        return maxSize;
    }

};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout << obj.MaxConnection(grid) << "\n";
    }
}

// } Driver Code Ends